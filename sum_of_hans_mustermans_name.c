#include <stdio.h>
void main() {
        char g[] = "Hans Mustermann";
        int sum = 0;
        printf("sum of %s name :-) :-) :-)\n", g ) ;
        for ( int i = 0 ; i < sizeof(g)-1 ; i++ ) {
                sum += (int)g[i] ;
                printf( "%i\t%c\t%i\n", i, g[i], (int)g[i] ) ;
        }
        printf("\t\t%i\n", sum ) ;
}
