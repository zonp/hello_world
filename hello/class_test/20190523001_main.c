/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 			Vim | Gcc
 *  Create time:    2019-05-23 16:45
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

void output(int, int []);
int my_sort(int len, int *items)
{
	int lefti[7];
	int right[7];
}

void output(int len, int items[])
{
	for (int i=0; i< len; i++)
	{
		printf("%d\t", items[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int items[] = {3,56,7,12,78,23,87,32,565,2,765,3221,3456};
	
	int len = sizeof(items)/sizeof(int);

	output(len, items);
	my_sort(len, items);
	output(len, items);
	return 0;	
}

