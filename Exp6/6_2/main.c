//2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define maxn 10000

int string_size(char []);
const int maxn=10000;

int main()
{
    char arr1[maxn],arr2[maxn];
    scanf("%s%s",arr1,arr2);
    printf("Longer:%s\n",string_size(arr1)>string_size(arr2)?arr1:arr2);
    return 0;
}

int string_size(char s[])
{
    int pos=0;
    while(s[pos])
        pos++;
    return pos;
}
