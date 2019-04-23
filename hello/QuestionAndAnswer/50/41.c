#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** 41.输入一个不多于5位的正整数，判断他是几位数，并逆序输出。 **/

int main()
{
	int num = 0;
	int new = 0;
	int count = 0;
	printf("please enter positive integer:");

	scanf("%d", &num);

	while(num!=0)
	{
		new *= 10;
		new += num % 10;
		num /= 10;
		++count;
	}

	printf("数字是 %d 为数\n", count);
	printf("逆序输出是：%d\n", new);


	return 0;
}
