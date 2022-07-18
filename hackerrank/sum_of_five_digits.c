#include <stdio.h>

int all[5]  ;
int main () {
        for ( int i = 0; i < 5; i++ ) {
                scanf( "%1d", &all[i] ) ;
        }
        printf( "%d\n", all[0]+all[1]+all[2]+all[3]+all[4] ) ;
        return 0 ;

}
