#include <stdio.h>
#include <stdlib.h>

int begin, end, step;

void show_sequenz () {
	
	if ( begin < end ) {
		for ( int i = begin ; i <= end ; i+=step ) {
				printf("%i\n", i);
		}
	}
	
	if ( begin > end ) {
		for ( int i = begin ; i >= end ; i-=step ) {
				printf("%i\n", i);
		}
	}
	
}



int main(int argc, char *args[]){
	if ( argc != 4 ) {
		printf("There must be 3 arguments in form of n-start n-end n-step\n");
		return 1;
	}

	begin = atoi(args[1]);
	end = atoi(args[2]);
	step = atoi(args[3]);
	
	show_sequenz() ;
	return 0;
}
