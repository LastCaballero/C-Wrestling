# include <stdio.h>
# include <stdlib.h>

int square (int number ) {
        return number * number ;
}

int all_params ( char *args[] ) {
        int i = 1 ;
        while ( args[i] )
                printf( "%i\n", square( atoi( args[i++] ) ) ) ;
}

int main (int count, char *args[] ) {
        int number ;

        while ( scanf( "%d", &number ) == 1 ) {
                printf("%i\n", square( number ) ) ;
        }

        all_params ( args ) ;

        return 0 ;
}
