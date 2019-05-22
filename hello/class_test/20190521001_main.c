/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-21 11:46
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int foo();
int bar();
int main(void)
{
	foo(2, 3, 4);
	return 0;
}
int foo(int a, int b)
{
	return bar(a);
}
int bar(int c, int d)
{
	int e = c + d;
	return e;
}
