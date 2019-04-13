//3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double average(int [][3],int);
void both_lower(int [][3],double,double);
void select_sort(int [][3],int);

int main()
{
    int str[10][3];
    int i,j;
    srand(time(NULL));
    for(i=0;i<10;i++)
        for(j=1;j<3;j++)
            str[i][j]=rand()%(100-0)+0;
    for(i=0;i<10;i++)
    {
        printf("%d ",2018217970+i);
        for(j=1;j<3;j++)
            printf("%d ",str[i][j]);
        printf("\n");
    }

    printf("physics average = %lf math average = %lf\n",average(str,1),average(str,2));

    both_lower(str,average(str,1),average(str,2));

    select_sort(str,2);
    printf("math grades after sorting:\n");
    for(i=0;i<10;i++)
        printf("%d ",str[i][2]);

    return 0;
}

double average(int s[10][3],int column)
{
    int i,j,sum=0;
    for(i=0;i<10;i++)
        sum+=s[i][column];
    return sum/10;
}

void both_lower(int arr[10][3],double ave1,double ave2)   //ave1:physics  ave2:math
{
    int i;
    for(i=0;i<10;i++)
        if(arr[i][1]<ave1&&arr[i][2]<ave2)
        {
            printf("%d ",2018217970+i);
            printf("%d %d\n",arr[i][1],arr[i][2]);
        }
}

void select_sort(int s[10][3],int column)
{
    int i,j,tmp;
    for(i=0;i<10;i++)
        for(j=i;j<10;j++)
            if(s[i][column]<s[j][column])
            {
               tmp=s[i][column];
               s[i][column]=s[j][column];
               s[j][column]=tmp;
            }
}
