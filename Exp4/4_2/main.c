// 2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i=0,j=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d*%d=%d ",i,j,i*j);
        printf("\n");
    }
    return 0;
}
