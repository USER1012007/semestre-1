{
  description = "Minimal flake to build and run a C program";

  inputs.nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";

  outputs = { self, nixpkgs }:
    let
      systems = [ "x86_64-linux" "aarch64-linux" "x86_64-darwin" "aarch64-darwin" ];
      forEachSystem = f: nixpkgs.lib.genAttrs systems (system: f {
        pkgs = import nixpkgs { inherit system; };
      });
    in {
      packages = forEachSystem ({ pkgs }: {
        default = pkgs.stdenv.mkDerivation {
          pname = "p48e4N_6A_23";
          version = "1.0";

          src = ./.;
          buildInputs = [ pkgs.gcc ];
          buildPhase = ''
            gcc -Wno-unused-result p48e4N_6A_23.c -o p48e4N_6A_23 -lm
          '';
          installPhase = ''
            mkdir -p $out/bin
            cp p48e4N_6A_23 $out/bin/
          '';
        };
      });

      apps = forEachSystem ({ pkgs }: {
        default = {
          type = "app";
          program = "${self.packages.${pkgs.system}.default}/bin/p48e4N_6A_23";
        };
      });
    };
}
