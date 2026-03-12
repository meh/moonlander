{
  description = "QMK firmware builder for the Ergodox EZ keyboard";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    nixcaps.url = "github:agustinmista/nixcaps";
    qmk_firmware = {
      url = "https://github.com/meh/zsa_firmware";
      ref = "firmware25";
      flake = false;
      type = "git";
      submodules = true;
    };
    nixcaps.inputs.qmk_firmware.follows = "qmk_firmware";
  };

  outputs =
    inputs@{
      flake-utils,
      nixpkgs,
      ...
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        nixcaps = inputs.nixcaps.lib.${system};
        moonlander = {
          src = ./.;
          keyboard = "zsa/moonlander/reva";
        };
      in
      {
        # Build with `nix build`
        packages.default = nixcaps.mkQmkFirmware moonlander;
        # Flash with `nix run`
        apps.default = nixcaps.flashQmkFirmware moonlander;
        devShells.default = pkgs.mkShell {
          QMK_HOME = "${inputs.qmk_firmware}";
          packages = [ pkgs.qmk ];
          shellHook =
            let
              compile_db = nixcaps.mkCompileDb moonlander;
            in
            ''
              ln -sf "${compile_db}/compile_commands.json" ./compile_commands.json
            '';
        };
      }
    );
}
