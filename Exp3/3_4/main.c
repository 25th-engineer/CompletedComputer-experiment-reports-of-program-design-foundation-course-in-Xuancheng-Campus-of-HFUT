//4
#include <stdio.h>

int main(int argc, char* argv[])
{
	double x1,y1,x2,y2,x3,y3,l1,l2,l3;
	scanf( "%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3 );

	l1 = ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 );
	l2 = ( x1 - x3 ) * ( x1 - x3 ) + ( y1 - y3 ) * ( y1 - y3 );
	l3 = ( x2 - x3 ) * ( x2 - x3 ) + ( y2 - y3 ) * ( y2 - y3 );
	//printf("%lf\n",l1);
	if( l1 == l2 || l1 == l3 || l2 == l3 )
		printf( "YES\n" );
	else
		printf( "NO\n" );
	return 0;
}
