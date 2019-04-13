//3
#include <stdio.h>
#include <stdlib.h>

int add(int,int);

int main()
{
    int a,b,_count;

    //version1:
    while(scanf("%d%d",&a,&b)==2)
    {
        _count=add(a,b);
        printf("%d \n",_count);
    }

    /*
    //version2:
    _count=add(1,2);
    printf("调用次数：%d \n",_count);
    _count=add(3,4);
    printf("调用次数：%d \n",_count);
    _count=add(13,22342);
    printf("调用次数：%d \n",_count);
    _count=add(1647,982);
    printf("调用次数：%d \n",_count);
    */
    return 0;
}

int add(int a,int b)
{
    static int _count=0;//如果不用static就达不到目的，为什么？
    _count++;
    printf("%d\n",a+b);
    return _count;
}
