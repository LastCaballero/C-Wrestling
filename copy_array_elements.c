#include <stdlib.h>
#include <stdio.h>

void copy_array ( int *a, int *b ) {
        for ( int i = 0 ; i < 100 ; i++ ) {
                b[i] = a[i] ;
        }
}

int main () {
        int ar1[100], ar2[100] ;
        int *p1, *p2 ;
        p1 = ar1 ;
        p2 = ar2 ;
        for ( int i = 0 ; i < 100 ; i++ ) {
                ar1[i] = random() ;
        }
        copy_array ( p1, p2 ) ;

        for ( int i = 0 ; i < 100 ; i++ ) {
                printf("%20d\t%20d\n", ar1[i], ar2[i] ) ;
        }
}
