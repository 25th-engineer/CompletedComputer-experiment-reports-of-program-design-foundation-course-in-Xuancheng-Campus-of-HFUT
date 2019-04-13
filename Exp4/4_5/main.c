// 5.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int solve(int);

int main(int argc, char* argv[])
{
	for(int i=1;i<=40;i++)
	{

			printf("%10d",solve(i));
		if(i%4==0)
			printf("\n");
	}
	return 0;
}

int solve(int n)
{
	if(n==1||n==2)
		return 1;
	return solve(n-1)+solve(n-2);
}
