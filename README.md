This library provides macros to manipulate variable arguments (variadic macros) in C, such as getting specific arguments, counting arguments, merging arguments, and the like.


## Examples

```c
// Get nth argument.
- MACROARG_GET<N>(args)

// Get index 0 (first) argument
printf("MACROARG_GET0(a0, a1, a2): %s.\n", MACROARG_GET0("a0", "a1", "a2"));

// Get max of 3 values using variable argument (variadic) macro
#define MAX2(A, B)    ((a)>(b)? (a) : (b))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...)      MACROARG_GET0(MACROARG_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))
printf("MAX(7, 1, 2): %d.\n", MAX(7, 1, 2));
```

```c
// Count number of arguments.
- MACROARG_COUNT(args)

printf("MACROARG_COUNT(3, 5, 2, 3): %d.\n", MACROARG_COUNT(3, 5, 2, 3));
```

```c
// Get even index arguments.
- MACROARG_GETEVEN(args)

printf("MACROARG_GETEVEN(7, 1, 2, 3): %d, %d.\n", MACROARG_GETEVEN(7, 1, 2, 3));
```

```c
// Get odd index arguments.
- MACROARG_GETODD(args)

printf("MACROARG_GETODD(7, 1, 2, 3): %d, %d.\n", MACROARG_GETODD(7, 1, 2, 3));
```

```c
// Prefix all arguments with a value.
- MACROARG_PREFIX(value, args)

printf("MACROARG_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", MACROARG_PREFIX(7, 1, 2, 3));
```

```c
// Postfix all arguments with a value.
- MACROARG_POSTFIX(value, args)

printf("MACROARG_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", MACROARG_POSTFIX(7, 1, 2, 3));
```

```c
// Merge all arguments.
- MACROARG_MERGE(args)

printf("MACROARG_MERGE(7, 1, 2, 3): %d.\n", MACROARG_MERGE(7, 1, 2, 3));
```

```c
// Merge all arguments pairs.
- MACROARG_MERGEPAIR(args)

printf("MACROARG_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", MACROARG_MERGEPAIR(7, 1, 2, 3));
```

```c
// Join all arguments, with separator.
- MACROARG_JOIN(separator, args)

printf("MACROARG_JOIN(7, 1, 2, 3): %d.\n", MACROARG_JOIN(7, 1, 2, 3));
```

```c
// Join all argument pairs, with separator.
- MACROARG_JOINPAIR(separator, args)

printf("MACROARG_JOINPAIR(7, 1, 2, 3): %d, %d.\n", MACROARG_JOINPAIR(7, 1, 2, 3));
```

```c
// Space arguments, a character apart.
- MACROARG_SPACE(args)

printf("MACROARG_SPACE(h, b, c, d): %s.\n", MACROARG_SPACE("h", "b", "c", "d"));
```

```c
// Space argument pairs, a character apart.
- MACROARG_SPACEPAIR(args)

printf("MACROARG_SPACEPAIR(h, b, c, d): %s, %s.\n", MACROARG_SPACEPAIR("h", "b", "c", "d"));
```


## Installation

Run:

```bash
$ npm i macroarg.c
```

And then include `macroarg.h` as follows:

```c
// main.c
#include <macroarg.h>

int main() { /* ... */ }
```

Finally, compile while adding the path `node_modules/macroarg.c` to your compiler's include paths.

```bash
$ clang -I./node_modules/macroarg.c main.c  # or, use gcc
$ gcc   -I./node_modules/macroarg.c main.c
```

You may also use a simpler approach with the [cpoach](https://www.npmjs.com/package/cpoach.sh) tool, which automatically adds the necessary include paths of all the installed dependencies for your project.

```bash
$ cpoach clang main.c  # or, use gcc
$ cpoach gcc   main.c
```

<br>
<br>


[![](https://raw.githubusercontent.com/qb40/designs/gh-pages/0/image/11.png)](https://wolfram77.github.io)<br>
[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/macroarg.c)
