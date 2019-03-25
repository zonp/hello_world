#include <stdio.h>
#include <stdlib.h>

/** 25.编写程序，判断从键盘输入的字符中数字的个数，大写字母的个数，小写字母的个数，
 * 其他字符的个数，以*作为字符输出的标志。
 *
 * **/


int main()
{
	char str[10];
	int i_num = 0;
	int A_num = 0;
	int a_num = 0;
	int o_num = 0;

	printf("please input a string \n");

	system("stty -echo");
	system("stty -cooked");
	int i=0;
	while(i<10 && str[i] != EOF && str[i] != '\n')
	{
		str[i] = getchar();
		printf("*");
		++i;
	}

	system("stty cooked");
	system("stty echo");


	printf("\n");
	for (i=0; i<10; i++)
	{
		if (str[i] >= (int)'0' && str[i] <= (int)'9') 
		{
			++i_num;
		}
		else if (str[i] >= (int)'A' && str[i] <= (int)'Z')
		{
			++A_num;
		}
		else if (str[i] >= (int)'a' && str[i] <= (int) 'z')
		{
			++a_num;
		}
		else
		{
			++o_num;
		}

		printf("%c", str[i]);
	}
	printf("\n");

	printf("数字字符：%d个\n", i_num);
	printf("大写字符：%d个\n", A_num);
	printf("小写字符：%d个\n", a_num);
	printf("其他字符：%d个\n", o_num);

	return 0;
}
