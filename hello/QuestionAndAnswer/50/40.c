#include <stdio.h>

/** 40.从键盘输入一个字串符，再输入两个正整数m和n,输出字符串中从m开始，连续n个字符。例如，输入abcdefg,2,3,输出bcd. **/

int main()
{
	char str[100];
	int m=0;
	int n=0;

	printf("please input string:\n");

	scanf("%s", str);

	printf("please enter start num:\n");
	scanf("%d", &m);

	printf("please enter need number:\n");
	scanf("%d", &n);


	for (int i=m-1; i<m+n-1; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
	return 0;
}
