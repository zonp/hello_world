#include <stdio.h>
#include <math.h>

/** 
 * 21.打印所有水仙花数。所谓水仙花是指一个三位数，其个位数字的立方和等于该数
 *
 **/


int  main()
{
	printf("水仙花数：\n");

	for (int i=100; i<1000; i++)
	{
		if (pow(i%10, 3) == i) 
		{
			printf("%d \t", i);
		}
	}

	printf("\n");

	return 0;
}
