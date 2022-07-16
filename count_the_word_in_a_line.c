#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define str_size 100

int main() {
        char str[str_size] ;
        int i = 0, wrd = 1 ;
        printf("input a word: ");
        fgets( str, sizeof str, stdin ) ;
        char *x ;
        while ( str[i] != '\0' ){
                x = &str[i] ;
                if ( *x == ' ' || *x == '\t' )
                        wrd++;
                i++ ;
        }
        printf("%d\n", wrd) ;
}
