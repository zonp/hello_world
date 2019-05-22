/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-22 21:36
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
//	struct {
//		char a;
//		short b;
//		int c;
//		char d;
//	} __attribute__((packed)) s;
	struct {
		char a;
		char d;
		short b;
		int c;
	} s;
	s.a = 1;
	s.b = 2;
	s.c = 3;
	s.d = 4;
	printf("%lu\n", sizeof(s));
	return 0;
}

