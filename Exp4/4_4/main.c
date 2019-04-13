// 4.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdbool.h>

int solve(int,int);

int main(int argc, char* argv[])
{
	int y,m;
	scanf("%d%d",&y,&m);
	printf("%d\n",solve(y,m));


	return 0;
}

int solve(int y,int m)
{
	bool s;
	if((y%400==0)||((y%4==0)&&(y%100==0)))
		s=true;
	else
		s=false;
	if(s)
	{
		switch(m)	//j>n-i j<n+i
		{
		case(1):
			return 31;
			break;
		case(2):
			return 28;
			break;
		case(3):
			return 31;
			break;
		case(4):
			return 30;
			break;
		case(5):
			return 31;
			break;
		case(6):
			return 30;
			break;
		case(7):
			return 31;
			break;
		case(8):
			return 30;
			break;
		case(9):
			return 31;
			break;
		case(10):
			return 31;
			break;
		case(11):
			return 30;
			break;
		case(12):
			return 31;
			break;
		}
	}
	else
	{
		switch(m)	//j>n-i j<n+i
		{
		case(1):
			return 31;
			break;
		case(2):
			return 29;
			break;
		case(3):
			return 31;
			break;
		case(4):
			return 30;
			break;
		case(5):
			return 31;
			break;
		case(6):
			return 30;
			break;
		case(7):
			return 31;
			break;
		case(8):
			return 30;
			break;
		case(9):
			return 31;
			break;
		case(10):
			return 31;
			break;
		case(11):
			return 30;
			break;
		case(12):
			return 31;
			break;
		}
	}
}
