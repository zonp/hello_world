#include <stdio.h>


/** 17.计算并输出200-400以内不能被5整除的整数的和 **/


int main()
{
	int sum = 0;

	for (int i=201; i<400; i++)
	{
		if (i%5 != 0)
		{
			sum += i;
		}
	}

	printf("输出200-400以内不能被5整除的整数的和是: %d\n", sum);

	return 0;
}
