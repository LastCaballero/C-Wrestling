# include <stdio.h>
# include <string.h>
# include <unistd.h>

void do_stdin() ;
void do_args ( char *args[] ) ;

char line[1024] ;

int main (int count,  char *args[]  ) {
	do_stdin();
	do_args ( args ) ;
	return 0 ;
}

void do_stdin() {
	if ( ! isatty( 0 ) ) {
		while ( fgets( line, 1024, stdin ) ) {
			for ( int i = (int)strlen(line)-2 ; i >= 0 ; i-- ) {
				printf( "%c", line[i] );
			}
			printf( "%c", line[ (int)strlen(line)-1 ] ) ;
		}	
	}	
}

void do_args ( char *args[] ) {
	FILE *fp ;
	int i = 1 ;
	while ( args[i] ) {
		fp = fopen( args[i] , "r" );
		if ( fp ) {
			while ( fgets( line, 1024, fp ) ) {
				for ( int i = (int)strlen(line)-2 ; i >= 0 ; i-- ) {
					printf( "%c", line[i] );
				}
				printf( "%c", line[ (int)strlen(line)-1 ] ) ;
			}
			fclose( fp );
		}
		i++ ;
	}
}

