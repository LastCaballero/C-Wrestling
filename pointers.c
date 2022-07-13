#include <stdio.h>
#define abs( a, b ) ( a >= b ? a - b : b - a )
#define sum( a, b ) ( a + b )
void update(int *a, int *b) {
        int mem_sum, mem_abs ;
        mem_sum = sum( *a, *b ) ;
        mem_abs = abs( *a, *b ) ;
        *a = mem_sum ;
        *b = mem_abs ;
}
int main ()
{
        int a, b;
        scanf( "%d %d", &a, &b ) ;
        update( &a, &b ) ;
        printf( "%i\n", a ) ;
        printf( "%i\n", b ) ;
        return 0;
}
