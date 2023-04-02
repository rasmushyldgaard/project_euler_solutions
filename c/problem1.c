#include <stdio.h>


/*	https://projecteuler.net/problem=1	*/
int main()
{
	unsigned int i;
	unsigned int res = 0;

	for( i = 0 ; i < 1000; i++ )
	{
		if ( i % 3 == 0 || i % 5 == 0 )
		{
			res = res + i;
		}
	}

	// result
	printf("%d", res);


	return 0;
}
