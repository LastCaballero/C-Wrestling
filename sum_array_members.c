#include <stdio.h>

int main () {
        int n ;
        int sum = 0 ;
        int ar[n] ;
        scanf("%d", &n ) ;
        for ( int i = 0 ; i < n ; i++ ) {
                scanf( "%d", &ar[i] ) ;
                sum += ar[i] ;
        }

        printf("%d\n", sum ) ;
        return 0 ;
}
