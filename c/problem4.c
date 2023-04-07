#include <stdio.h>
#include <math.h>

unsigned int ReverseNumber(double x);

/*	https://projecteuler.net/problem=4	*/
int main()
{
	unsigned int i, j;
	unsigned int res = 0;

	for( i = 999; i >= 100; i-- )
	{
		for ( j = 999; j >= 100; j-- )
		{
			unsigned int prod = i * j;

			if (prod > res && ReverseNumber(prod) == prod )
			{
				res = prod;
			}
		}
	}

	// result
	printf("%d", res);

	return 0;
}

/* function to reverse a number with math */
unsigned int ReverseNumber(double x)
{
	unsigned int i, j;
	unsigned int len = (unsigned int) log10(x);
	unsigned int decs[len];

	j = 0;
	for ( i = len; i > 0; i-- )
	{
		decs[ j++ ] = pow( 10, i );
	}
	decs[ len ] = pow( 10, 0 );

	unsigned int sum = 0;
	for ( int i = 0; i <= len; i++ )
	{
		unsigned int y = x / decs[ j-- ];
		y %= 10;
		y *= decs[ i ];
		sum = sum + y;
	}

	return sum;
}


