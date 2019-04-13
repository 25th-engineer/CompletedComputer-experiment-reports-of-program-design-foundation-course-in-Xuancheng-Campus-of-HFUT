//2
#include <stdio.h>

int main()
{
    int num;
    scanf( "%d", &num );
    printf( "%d%d%d--->%d%d%d", num / 100 % 10, num % 100 / 10, num % 10, num % 10, num % 100 / 10, num / 100 % 10 );
    return 0;
}
