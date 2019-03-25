#include <stdio.h>


/** 28.求1-1/2+1/3-1/4+.....+1/99-1/100的值。 **/

int main()
{
	double res = 1;

	for (int i=1; i<=100; i++)
	{
		if (i%2 == 0)
		{
			res -= 1/i;
		}
		else
		{
			res += 1/i;
		}
	}
	
	printf("1-1/2+1/3-1/4+.....+1/99-1/100的值是: %f\n", res);
	return 0;
}
