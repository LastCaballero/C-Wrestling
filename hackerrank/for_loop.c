#include <stdio.h>
#define even_or_odd( n ) ( n % 2 == 0 ? "even" : "odd" )
char *words[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" } ;
int main () {
int a, b ;
        scanf( "%d\n%d", &a, &b ) ;
        for ( int i = a; i <= b; i++ ){
                if ( i >= 1 && i <= 9 )
                        printf( "%s\n", words[i-1] ) ;
                else
                        printf( "%s\n", even_or_odd(i) ) ;
        }
        return 0 ;
}
