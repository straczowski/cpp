

# G++ Options

```
$g++ --help
-c                      Only run preprocess, compile, and assemble steps
-D <macro>=<value>      Define <macro> to <value> (or 1 if <value> omitted)
-E                      Only run the preprocessor
-I <dir>                Add directory to include search path
-L <dir>                Add directory to library search path
-MD                     Write a depfile containing user and system headers
-o <file>               Write output to <file>
-print-file-name=<file> Print the full library path of <file>
-print-libgcc-file-name Print the library path for the currently used compiler runtime library ("libgcc.a" or "libclang_rt.builtins.*.a")
-print-resource-dir     Print the resource directory pathname
-print-search-dirs      Print the paths used for finding libraries and programs
-std=<value>            Language standard to compile for
-stdlib=<value>         C++ standard library to use
-S                      Only run preprocess and compilation step
-v                      Show commands to run and use verbose output
```

## Dump Search Paths

```
g++ -E -x c++ - -v < /dev/null
```

# Compile

```
$ make
```

# clean

```
make clean
```