#include <stdio.h>


/** 24.输入一个正整数，输出他的阶乘。 **/

int main()
{
	int num = 1;
	int res = 1;
	printf("please input a positive integer: \n");
	scanf("%d", &num);

	if (num == 0)
	{
		res = 1;
	}
	else
	{
		for (int i=1; i<=num; i++)
		{
			res *= i;
		}
	}
	printf("%d!= %d", num, res);
		
	return 0;
}
