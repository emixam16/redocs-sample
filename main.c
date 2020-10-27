#include "header.h"

#define assert(x, msg) if(!(x))  {printf("%s\n",msg); exit(EXIT_FAILURE);} 

#define die(msg) printf("%s\n",msg); exit(EXIT_FAILURE); 


void usage(char * progname) {
		
		printf("Usage %s <fn> <arg>\n", progname);
		int i=0;
        #define FN(x) printf ("fn=%d -> ", i++); x##_usage();
        #include "functions.h"
        #undef FN
		exit(EXIT_FAILURE);
}
int main(int argc, char** argv) {
	if(argc < 2)
		usage(argv[0]);	
	int fn = atoi(argv[1]);
	int arg = atoi(argv[2]);

	switch(fn) {
		#define FN(x) case(fn_##x): x(arg);break;
		#include "functions.h"
		#undef FN
		default:
			usage(argv[0]);
	}
	printf("DONE\n");
	return EXIT_SUCCESS;
}
