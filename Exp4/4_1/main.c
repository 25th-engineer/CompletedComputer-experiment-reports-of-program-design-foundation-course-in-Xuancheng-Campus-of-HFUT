// 1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
	int line = 0;  //上半部分行数
    int i,j,k,n;
    char c='A';
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (k = 0; k < 2 * i+1; k++)
                //printf("*");
            printf("%c",i+c);
        printf("\n");
    }
    char c1=i+c-1;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < i + 1; j++)
            printf(" ");
        for (k = 0; k < 2 * (n - 1 - i) - 1; k++)
            //printf("*");
            printf("%c",c1-i-1);
        printf("\n");
    }
    return 0;
}
