//2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("x1.in","r",stdin);
    freopen("x1.out","w",stdout);
    int s[10];
    int _max,_min,max_index,min_index,i;
    for(i=0;i<10;i++)
        scanf("%d",&s[i]);
    _max=s[0],max_index=0;
    _min=s[9],min_index=9;
    for(i=1;i<9;i++)
    {
        if(s[i]>_max)
        {
            _max=s[i];
            max_index=i;
        }
        if(s[i]<_min)
        {
            _min=s[i];
            min_index=i;
        }
    }
    printf("%d %d\n%d %d",_max,max_index,_min,min_index);
    return 0;
}
