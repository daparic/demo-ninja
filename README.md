
- git clone https://github.com/daparic/demo-ninja.git
- cd demo-ninja/
- cpptesttrace ninja
- /parasoft/bin/cli/cpptestcli -config "builtin://Recommended Rules" -bdf cpptestscan.bdf -compiler gcc_11-64

## Parasoft tips:
- Enumerate supported compiler versions: `cpptestcli -list-compilers`
- Enumerate builtin rules: `cpptestcli -list-configs`
- Generate `build.ninja` with `cmake`: `cmake -GNinja ..`
- [Other tips](https://gist.github.com/daparic/16c3f7baa8cbceb7bb94a6c6774152fa)
