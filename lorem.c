#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char lorem[] = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";

void print_lorem () {
	for ( int i = 0; i < strlen(lorem) ; i++ ) {
		printf( "%c", lorem[i] );	
	}
	printf("\n");
}

void times ( int *times ) {
	int loops = *times;
	for ( int i = 0; i < loops; i++ )
		print_lorem();
}


int main (int argc, char *argv[]) {
	int count =  atoi(argv[1]);
	int *loops = &count;
	times ( loops );
}
