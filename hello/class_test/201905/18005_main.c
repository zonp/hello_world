/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-18 19:00
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
	char input[5];
	int sum = 0, i = 0;

	while (1)
	{
		sum = 0;
		scanf("%s", input);
		for (i=0; input[i] != '\0'; i++)
		{
			if (input[i] < '0' || input[i] > '9')
			{
				printf("Invalid input !\n");
				sum=-1;
				break;
			}
			sum = sum * 10 + input[i]-'0';
		}
		printf("input=%d\n", sum);
	}
	return 0;
}

