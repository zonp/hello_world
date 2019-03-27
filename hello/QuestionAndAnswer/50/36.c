#include <stdio.h>

/** 36.输入一个华氏温度，输出摄氏温度，计算公式为c=5/9*(F-32)。要求结果保留两位小数。 **/


int main()
{
	float f,c;

	printf("输入一个华氏温度: \n");
	scanf("%f", &f);

	c = (f-32) * 5 / 9;

	printf("对应的摄氏温度为: %.2f\n", c);

	return 0;
}
