#include <stdio.h>
#include <ctype.h>

/** 20.输入一串字符，把其中的大写字母变成小写字母并输出。 **/

int main()
{
	char str[100];

	printf("please input a string :\n");
	
	scanf("%s", str);

	printf("new string is :\n");
	for (int i=0; i<100 && str[i] != '\0'; i++)
	{
		printf("%c", toupper(str[i]));
	}


	printf("\n");

	return 0;
}
