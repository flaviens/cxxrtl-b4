# Wrong runtime value with CXXRTL, probably because an event is ignored

How to reproduce:
```bash
bash run.sh
```

Yosys version: `Yosys 0.37+21 (git sha1 8649e3066, clang 10.0.0-4ubuntu1 -fPIC -Os)`

Expected:
```
out=1
```

Actual:
```
out=0
```
