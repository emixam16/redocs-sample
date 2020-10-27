#include "header.h"

#define assert(x, msg) if(!(x))  {printf("%s\n",msg); exit(EXIT_FAILURE);} 

#define die(msg) printf("%s\n",msg); exit(EXIT_FAILURE); 


void usage(){

}
int main(int argc, char** argv) {
	assert(argc>2, "Error usage ./prog fn arg");

	
	int fn = atoi(argv[1]);
	int arg = atoi(argv[2]);

	switch(fn) {
		case(fn_double_free):
				double_free(arg);
				break;
		case(fn_invalid_read):
				invalid_read(arg);
				break;
		default:
				die("Incorrect function");

	}
	printf("DONE\n");
	return EXIT_SUCCESS;
}
