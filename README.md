
- git clone https://github.com/daparic/demo-ninja.git
- cd demo-ninja/
- cpptesttrace ninja
- /parasoft/bin/cli/cpptestcli -config "builtin://Recommended Rules" -bdf cpptestscan.bdf -compiler gcc_11-64

## Parasoft tips:
- [Enumerate supported compiler versions](https://gist.github.com/daparic/7188b7ff6471e4cd5a3059da66a8ecd9): `cpptestcli -list-compilers`
- [Enumerate builtin rules](https://gist.github.com/daparic/6361d64fbbd3be0e1e6fe940765380ea): `cpptestcli -list-configs`
- Generate `build.ninja` with `cmake`: `cmake -GNinja ..`
- [Other tips](https://gist.github.com/daparic/16c3f7baa8cbceb7bb94a6c6774152fa)
