#include <stdio.h>


/** 18.编写程序，将用户输入的字符串中所有的字符a去掉，然后输出剩余的字符。 **/

int main()
{
	char str[100];

	printf("please enter a string \n");
	scanf("%s", str);


	for (int i=0; i<100 && str[i] != '\0'; i++)
	{
		if (str[i] != 'a')
		{
			printf("%c", str[i]);
		}
		printf("i=%d\n", i);
	}

	
	printf("\n");

	return 0;
}
