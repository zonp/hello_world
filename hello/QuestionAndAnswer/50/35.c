#include <stdio.h>

/** 35.输入N个值，计算并输出1*1+2*2+3*3+...+n*n的值。要求编写函数f求平方。 **/


int f(int a)
{
	return a*a;
}


int main()
{
	unsigned int num = 0;
	unsigned int sum = 0;
	printf("please input N\n");
	scanf("%d", &num);
	
	for (int i=1; i<=num; i++)
	{
		sum += f(i);
	}


	printf("1*1+2*2+3*3+...+n*n的值为: %d\n", sum);

	return 0;
}
