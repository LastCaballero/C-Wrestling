#include <stdio.h>
char *names[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" } ;
int main() {
        int n = 0 ;
        if ( scanf("%d", &n) < 1 )
                return 1 ;
        else if ( n >= 1 && n <= 9 )
                printf("%s\n", names[n-1]);
        else
                printf("Greater than 9\n");
        return 0;
}
