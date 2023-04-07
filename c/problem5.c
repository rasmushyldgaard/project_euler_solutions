#include <stdio.h>


/*	https://projecteuler.net/problem=5	*/
int main()
{
	unsigned long res = 0;
	unsigned long N = 1000000000;	// upper limit
	unsigned long step = 1040;		// step size
	unsigned int i = 1;				// increment
	unsigned int v[14] =
	{
	  3, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19
	};

	do
	{
		if ( ( i * step ) % 19 == 0)
		{
			for ( size_t j = 0; j < sizeof(v)/sizeof(*v); j++ )
			{
				if ( ( i * step ) % v[j] != 0 )
				{
					break;
				}

				else
				{
					if ( j == ( sizeof(v)/sizeof(*v) - 1 ) )
					{
						res = i * step;
						break;
					}
					continue;
				}
			}
		}

		if ( res > 0 )
		{
			break;
		}

		i++;

	} while ( i * step < N );

	// result
	printf("%lu", res);

	return 0;
}


