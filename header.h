#include<stdio.h>
#include<stdlib.h>

enum FNS {
	#define FN(x) fn_##x,
	#include "functions.h"
	#undef FN
};
#define FN(x) int x(int arg); void x##_usage();
#include "functions.h"
#undef FN
