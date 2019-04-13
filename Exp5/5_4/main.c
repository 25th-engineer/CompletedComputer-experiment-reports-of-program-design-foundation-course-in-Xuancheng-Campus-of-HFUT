//4
#include <stdio.h>
#include <stdlib.h>

int f(int);

int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}

int f(int n)
{
    printf("%d ",n%10);
    if(n/10)
        f(n/10);
}
