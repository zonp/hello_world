/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-18 18:14
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int add_range(int low, int high)
{
	int i,sum;
	for (i=low; i<=high; i++)
		sum = sum +i;

	return sum;
}
int main(int argc, char *argv[])
{
	int result[100];
	result[0] = add_range(1, 10);
	result[1] = add_range(1, 100);

	printf("result[0]=%d\tresult[1]=%d\n", result[0], result[1]);
	return 0;
}

