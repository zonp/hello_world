#include <stdio.h>

/** 31.求100以内自然数中奇数之和 **/

int main()
{
	int sum = 0;

	for (int i=1; i<100; i++)
	{
		if (i%2 != 0)
		{
			sum +=i;
		}
	}

	printf("100 之内奇数之和是: %d \n", sum);
	return 0;
}
