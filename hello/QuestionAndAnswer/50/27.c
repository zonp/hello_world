#include <stdio.h>
#include <string.h>

/** 27.输入一串字符，要求你有序输出。要求使用数组实现。 **/

int main()
{
	char str[100];
	size_t len = 0;
	printf("please input  a string\n");

	scanf("%s", str);

	len = strlen(str);

	for (int i=0; i<len; i++)
	{
		for (int j=1; j < len-i; j++)
		{
			if (str[j-1] > str[j])
			{
				char tmp;
				tmp = str[j];
				str[j] = str[j-1];
				str[j-1] = tmp;
			}
		}
	}


	printf("%s\n", str);

	return 0;
}
