// 3.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

double average(double,double);

int main(int argc, char* argv[])
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%lf\n",average(a,b));
	return 0;
}

double average(double a,double b)
{
	return((a+b)/2);
}
