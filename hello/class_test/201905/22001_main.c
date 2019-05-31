/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-22 19:52
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

const int A = 10;
int a = 20;
static int b = 30;
int c;

int main(int argc, char *argv[])
{
	static int a = 40;
	char b[] = "Hello world";
	register int c = 50;
	printf("Hello world %d\n", c);
	return 0;
}

