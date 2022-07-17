#include <stdio.h>
#include <stdlib.h>
int main () {
        int num ;
        scanf("%d", &num);
        int *arr ;
        int i ;
        arr = (int *) malloc( num * sizeof(int) ) ;
        for ( i = 0 ; i < num ; i++ ){
                scanf( "%d", arr + i ) ;
        }
        int *arr2 = ( int * ) malloc ( num * sizeof(int) ) ;
        int j ;
        for ( i = num-1, j = 0 ; i >=0 ; i--, j++ ){
                *(arr2 + j) = *(arr + i) ;
        }
        arr = arr2 ;
        for ( i = 0 ; i < num ; i++ )
                printf( "%d ", *(arr + i) ) ;
        printf("\n");

        return 0 ;

}
