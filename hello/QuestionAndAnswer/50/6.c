#include <stdio.h>

/** 6.输入5个数，求和并输出。要求编写求和的函数。 **/

int sumFun(const int *num, int len)
{
	int sum = 0;
	for (int i=0; i<len; i++)
	{
		sum += *(num+i);
	}
	return sum;
}


int main()
{
	int num[5];
	printf("please input five number:(separation by commas )");

	scanf("%d,%d,%d,%d,%d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	printf("the sum of five number is : %d\n", sumFun(num, 5));

	return 0;
}
