#include <stdio.h>

/** 16.计算并输出200-400以内不能被7整除的整数的和。 **/

int main()
{
	int sum = 0;

	for (int i=201; i<400; i++)
	{
		if (i%7 !=0)
		{
			sum += i;
		}
	}

	printf("200-400以内不能被7整除的整数的和是: %d\n", sum);

	return 0;
}
