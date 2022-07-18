# include <stdio.h>

int square ( int *n ) {
        return *n * *n ;
}

int main() {
        int x = 2 ;
        int result = square ( &x ) ;
        printf( "%i\n" , result );
}
