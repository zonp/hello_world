#include <stdio.h>

/** 12.计算并输出1-200以内不能被3整除的整数之和 **/

int main()
{
	int sum=0;
	
	for (int i=1; i<=200; i++)
	{
		if (i%3 != 0)
		{
			sum +=i;
		}
	}

	printf("1-200以内不能被3整除的整数之和是: %d\n", sum);

	return 0;
}
