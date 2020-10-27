#include "header.h"

int invalid_array(int arg) {
	int *a = malloc(arg);
	free(a);
	return 0;
}
void invalid_array_usage() {
	printf("invalid array -- Allocate an array, invalid if arg < 0\n");
}


int memory_leak(int arg) {
	int*x;
	if(arg > 0)
		x =  malloc(1);
	return 0;
}
void memory_leak_usage() {
	printf("dont free -- Memory leak if arg > 0\n");
}



int double_free(int arg) {
	int* x =  malloc(1);
	if(arg > 0) {
		free(x);
		free(x);
	}
	return 0;
}
void double_free_usage() {
	printf("double free -- crashes if arg > 0\n");
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
	printf("invalid read -- crashes if arg > 0\n");
}
