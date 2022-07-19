#include <stdio.h>
#include <unistd.h>
int main ( int count, char *args[] ) {
        char c ;
        if ( ! isatty( STDIN_FILENO ) ) {
                while ( scanf("%c",&c) != EOF )
                        printf("%c", c ) ;
        }

        int i = 1 ;
        while ( args[i] ) {
                FILE *file ;
                file = fopen( args[i], "r" ) ;
                if ( file ) {
                        while ( fscanf(file, "%c", &c) != EOF )
                                printf("%c", c ) ;
                }
                fclose( file );
                i++ ;
        }
        return 0 ;
}
