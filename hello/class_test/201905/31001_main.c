/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-31 00:52
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 0;
	//   1     2	3	4
	a = (++a)+(++a);


	printf("%d\n", a);
	return 0;
}

