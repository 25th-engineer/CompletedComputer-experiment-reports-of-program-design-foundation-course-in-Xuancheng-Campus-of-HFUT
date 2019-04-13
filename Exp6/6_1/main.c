//1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void select_sort(int []);

int main()
{
    int s[20];
    int i;
    srand(time(NULL));
    for(i=0;i<20;i++)
        s[i]=rand()%(1000-0)+0;
    for(i=0;i<20;i++)
        printf("%d ",s[i]);
    printf("\narray after sorting:\n");
    select_sort(s);
    for(i=0;i<20;i++)
        printf("%d ",s[i]);
    printf("\n");

    return 0;
}

void select_sort(int s[])
{
    int i,j,tmp;
    for(i=0;i<20;i++)
        for(j=i;j<20;j++)
            if(s[i]>s[j])
            {
                tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
}
