// 1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
	float x,y,z,tmp;
	scanf("%f%f%f",&x,&y,&z);

	tmp=x;
	x=y;
	y=tmp;

	tmp=x;
	x=z;
	z=tmp;

	printf("%f %f %f\n",x,y,z);

	return 0;
}
