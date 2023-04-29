#include <stdio.h>

/*	https://projecteuler.net/problem=6	*/
int main()
{
	unsigned int i;
	unsigned int N = 100;

	// sum of squares
	unsigned int sumOfSquares = 0;
	for ( i = 0; i <= N; i++ )
	{
		sumOfSquares += ( i * i );
	}

	// square of sum
	unsigned int squareOfSum = 0;
	for ( i = 0; i <= N; i++ )
	{
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;

	// difference
	printf( "%d", ( squareOfSum - sumOfSquares ) );

	return 0;
}



