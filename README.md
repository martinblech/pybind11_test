# Bazel pybind11 error

Attempring to run the `cc_binary` produces this error:

```
> bazel run :pybind11_test                     ─╯
INFO: Analyzed target //:pybind11_test (2 packages loaded, 2 targets configured).
INFO: Found 1 target...
Target //:pybind11_test up-to-date:
  bazel-bin/pybind11_test
INFO: Elapsed time: 1.030s, Critical Path: 0.97s
INFO: 4 processes: 2 internal, 2 darwin-sandbox.
INFO: Build completed successfully, 4 total actions
INFO: Running command line: bazel-bin/pybind11_test
dyld[99901]: Library not loaded: /install/lib/libpython3.11.dylib
  Referenced from: <4E94E925-A24E-3750-9588-FC250A643885> /private/var/tmp/_bazel_user/b961ee880161efb851b787580cc7e512/execroot/_main/bazel-out/darwin_arm64-fastbuild/bin/pybind11_test
  Reason: tried: '/install/lib/libpython3.11.dylib' (no such file), '/System/Volumes/Preboot/Cryptexes/OS/install/lib/libpython3.11.dylib' (no such file), '/install/lib/libpython3.11.dylib' (no such file), '/usr/local/lib/libpython3.11.dylib' (no such file), '/usr/lib/libpython3.11.dylib' (no such file, not in dyld cache)
[1]    99901 abort      bazel run :pybind11_test
```
