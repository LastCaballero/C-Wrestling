# include <stdio.h>
# include <stdlib.h>
# define fahr( x ) ( (x * 9/5) + 32 )

int main (int count, char *args[]) {
	
	float start, end, step ;
	
	if ( count != 4 ) 
		fprintf( stderr, "this programm needs start,end and step (f.e. 10 30 0.5 )" );
	else {
		start = (float)atof( args[1] ); 
		end   = (float)atof( args[2] ); 
		step  = (float)atof( args[3] ); 
	}

	printf( "Celsius\t\tFahrenheit\n" );
	printf( "-------\t\t----------\n" );

	for ( double i = start ; i <= end ; i += step ) {
		printf( "%f\t%f\n", i, fahr(i) );	
	}

	return 0 ;
}
