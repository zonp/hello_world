#include <stdio.h>

/** 8.编写程序，将用户输入的字符串中的所有的字符a用*代替，然后输出。 **/


int main()
{
	char str[100];
	printf("please input string: ");

	scanf("%s", str);

	for(int i=0; i<100; i++)
	{
		if(str[i] == 'a')
		{
			str[i]='*';
		}
	}

	printf("input string is : %s\n", str);

	return 0;
}
