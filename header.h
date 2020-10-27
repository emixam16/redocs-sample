#include<stdio.h>
#include<stdlib.h>

enum FNS {
	fn_double_free,
	fn_invalid_read,
};

int double_free(int arg);
int invalid_read(int arg);
