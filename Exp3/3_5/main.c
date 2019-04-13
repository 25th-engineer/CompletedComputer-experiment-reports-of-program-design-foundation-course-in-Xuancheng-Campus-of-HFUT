//5
// 5.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
	long int n;
	int _count=0;
	scanf("%ld",&n);
	while(n)
	{
		n/=10;
		_count++;
	}
	printf("%d\n",_count);
	return 0;
}
