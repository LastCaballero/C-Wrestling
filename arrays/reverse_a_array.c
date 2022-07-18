#include <stdio.h>

int main () {
        int n ;
        int sum = 0 ;
        int ar[n] ;
        scanf("%d", &n ) ;
        for ( int i = 0 ; i < n ; i++ ) {
                scanf( "%d", &ar[i] ) ;
        }
        for ( int i = (n-1) ; i >= 0 ; i-- ) {
                printf( "%d ", ar[i] ) ;
        }
        printf("\n");

        return 0 ;
}
