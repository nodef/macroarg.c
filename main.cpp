#include <stdio.h>
#include "macroarg.h"


// define variadic macro for max
#define MAX2(A, B) ((A)>(B)? (A) : (B))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...) MACROARG_GET0(MACROARG_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))


int main() {
	printf("MACROARG_GET0(a0, a1, a2): %s.\n", MACROARG_GET0("a0", "a1", "a2"));
	printf("MACROARG_COUNT(3, 5, 2, 3): %d.\n", MACROARG_COUNT(3, 5, 2, 3));
	printf("MACROARG_GETEVEN(7, 1, 2, 3): %d, %d.\n", MACROARG_GETEVEN(7, 1, 2, 3));
	printf("MACROARG_GETODD(7, 1, 2, 3): %d, %d.\n", MACROARG_GETODD(7, 1, 2, 3));
	printf("MACROARG_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", MACROARG_PREFIX(7, 1, 2, 3));
	printf("MACROARG_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", MACROARG_POSTFIX(7, 1, 2, 3));
	printf("MACROARG_MERGE(7, 1, 2, 3): %d.\n", MACROARG_MERGE(7, 1, 2, 3));
	printf("MACROARG_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", MACROARG_MERGEPAIR(7, 1, 2, 3));
	printf("MACROARG_JOIN(7, 1, 2, 3): %d.\n", MACROARG_JOIN(7, 1, 2, 3));
	printf("MACROARG_JOINPAIR(7, 1, 2, 3): %d, %d.\n", MACROARG_JOINPAIR(7, 1, 2, 3));
	printf("MACROARG_SPACE(h, b, c, d): %s.\n", MACROARG_SPACE("h", "b", "c", "d"));
	printf("MACROARG_SPACEPAIR(h, b, c, d): %s, %s.\n", MACROARG_SPACEPAIR("h", "b", "c", "d"));
	return 0;
}
