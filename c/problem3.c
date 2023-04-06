#include <stdio.h>


/*	https://projecteuler.net/problem=3	*/
int main()
{
	unsigned long M = 600851475143;
	unsigned int n = 2;

	do
	{
		if ( M % n != 0 )
		{
			n++;
		}
		else
		{
			M /= n;
		}

	} while ( n * n <= M );

	// result
	printf("%lu", M);

	return 0;
}


