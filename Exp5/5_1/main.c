//1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("x1.in","r",stdin);
    freopen("x1.out","w",stdout);
    int s[10];
    int tmp,i;
    for(i=0;i<10;i++)
        scanf("%d",&s[i]);
    for(i=0;i<5;i++)
    {
        tmp=s[i];
        s[i]=s[10-1-i];
        s[10-1-i]=tmp;
    }
    for(i=0;i<10;i++)
        printf("%d ",s[i]);
    return 0;
}
