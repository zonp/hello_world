/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-27 19:03
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

static inline int MAX(int a, int b)
{
	return a > b ? a: b;
}

int a[] = { 9, 3, 5, 2, 1, 0, 8, 7, 6, 4 };

int max(int n)
{
	return n == 0 ? a[0] : MAX(a[n], max(n-1));
}

int main(int argc, char *argv[])
{
	max(9);
	return 0;
}

