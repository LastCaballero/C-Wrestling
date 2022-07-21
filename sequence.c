#include <stdio.h>
#include <stdlib.h>

void seq_out ( int *start, int *end, int *step ) ; 
int test_arg (char *arg[]) ;

int main ( int count, char *args[] ) {
	int start, end, step ;
	if( count < 3 ){
		if ( test_arg( &args[1] ) ) {
			printf("2 ( start end )  or 3 arguments ( start end step )\n");
			return 2 ;
		}
		printf( "you need at least 2 arguments" );
		return 1 ;
	}

	if ( args[1] )
		start = atoi ( args[1] ) ;

	if ( args[2] )
		end = atoi ( args[2] ) ;
	
	if ( args[3] )
		step = atoi ( args[3] ) ;
	else
		step = 1 ;
	
	if ( start && end && start == end ) {
		printf("start and end must be differen!");
		return 1 ;
	}
	if ( start && end && start > end ) {
		printf("end must be greater!");
		return 1 ;
	}
	
	if ( start && end && step )
		seq_out( &start, &end, &step ) ;

	return 0 ;
}

int test_arg (char *word[]) {
	int i = 0 ;
	while ( word[0][i] ) {
		if ( word[0][i] == 'h' )
			return 1 ;
		i++ ;
	}
	return 0 ;
}

void seq_out (int *start, int *end, int *step  ) {
	for ( int i = *start ; i <= *end; i += *step ) {
		printf("%d\n", i );
	}	
}
