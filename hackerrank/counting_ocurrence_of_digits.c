#include <stdio.h>

int digits[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
char c ;
int main (){
        while ( 1 ) {
                scanf("%c", &c );
                if ( c == '\n' )
                        break ;
                if ( c >= '0' && c <= '9' )
                        digits[ c - '0' ]++ ;

        }
        for ( int i = 0 ; i < 10 ; i++ )
                printf("%d ", digits[i]);
}
