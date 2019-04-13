//2
// test2.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
	int a=123324,b=2345560;
	char c='f',d='X';
	double e=24235.54541,f=5462.545;
	printf("%d\n%d\n",(int)c,(int)d);
    printf("%ld\n%ld\n",(long int)a,(long int)b);
    printf("%lf\n%lf\n",(double)a,(float)b);
	printf("%ld\n%ld\n",(int)e,(int)f);
	return 0;
}
