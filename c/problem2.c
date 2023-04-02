#include <stdio.h>

unsigned int Fibonacci( unsigned int x );

/*	https://projecteuler.net/problem=2	*/
int main()
{
	unsigned int n = 0;
	unsigned int res = 0;


	do
	{
		if ( Fibonacci( n ) % 2 == 0 )
		{
			res = res + Fibonacci( n );
		}

		n = n + 1;

	} while( Fibonacci( n ) < 4000000 );

	// result
	printf("%d", res);


	return 0;
}

/*	recursive fibonacci function	*/
unsigned int Fibonacci( unsigned int x )
{
	if ( x == 0 )
	{
		return 0;
	}
	else if ( x == 1 )
	{
		return 1;
	}
	else
	{
		return ( Fibonacci( x-1 ) + Fibonacci( x-2 ) );
	}
}
