#include <stdio.h>
#include <math.h>
#include <complex.h>

/*	https://projecteuler.net/problem=9	*/
int main()
{
	unsigned int a, b, k;
	double complex z;
	double res, abs, sum;
	unsigned int N = 1000;
	unsigned int K = 50;

	/* theory: https://en.wikipedia.org/wiki/Pythagorean_triple#Relation_to_Gaussian_integers */
	for ( a = 1; a <= N; a++ )
	{
		for ( b = 1; b <= N; b++ )
		{

			for ( k = 1; k <= K; k++ )
			{
				z = a + b * I;
				z = k * ( z*z );
				abs = sqrt( (creal(z)*creal(z) + cimag(z)*cimag(z)) );

				if ( (creal(z) > 0) && (cimag(z) > 0) && (abs > 0) )
				{
					sum = creal(z) + cimag(z) + abs;

					if ( (int)sum == N )
					{
						res = creal(z) * cimag(z) * abs;

						// result found -> quit program
						printf("%d", (int)res);
						return res;
					}
					else if ( (int)sum > N )
					{
						break;
					}
				}
				else
				{
					break;
				}
			}
		}
	}


	return 0;
}



