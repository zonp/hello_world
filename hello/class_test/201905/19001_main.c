/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-19 12:10
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int bar(int c, int d)
{
	int e = c + d;
	return e;
}

int foo(int a, int b)
{
	return bar(a, b);
}

int main(int argc, char *argv[])
{
	foo(2, 3);
	return 0;
}

