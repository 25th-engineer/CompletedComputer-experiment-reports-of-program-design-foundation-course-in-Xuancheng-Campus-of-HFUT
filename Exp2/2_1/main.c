
//1
// test1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
  int  a1 = 15 , a2 = - 47 ;
  long  int  b1 = 1234567 , b2 = - 9876543 ;
  float  c1 = 3.1416 , c2 = -8.9512;
  double  d1 = 0.123456789 , d2 = - 0.987654321 ;
  printf("%lf\n",d1);
  printf("%ld\n",b2);
  printf("%-5d\n",a1);
  printf("%7d\n",a2);
  printf("%-10ld\n",b1);
  printf("%.3lf\n",c1);
  printf("%.0lf\n",c2);
  printf("%12.8lf\n",d2);



	return 0;
}
