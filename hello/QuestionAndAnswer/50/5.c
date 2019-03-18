#include <stdio.h>

/** 5.求100以内自然数中偶数之和。 **/

int main()
{
	int sum=0;
	for (int i=0; i<100; i++)
	{
		if (i%2 == 0) {
			sum += i;
		}
	}

	printf("100以内自然数中的偶数之和是: %d\n", sum);
	return 0;
}
