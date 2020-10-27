#include "header.h"
int double_free(int arg) {
	int* x =  malloc(1);
	if(arg > 0) {
		free(x);
		free(x);
	}
	return 0;
}
void double_free_usage() {
	printf("double free -- crashes if arg > 0");
}

int invalid_read(int arg) {
	int* x =  malloc(1);
	*x=0;
	int var;
	if(arg > 0) {
		free(x);
		return *x;
	}
	else return 0;
}
void invalid_read_usage() {
	printf("invalid read -- crashes if arg > 0");
}
