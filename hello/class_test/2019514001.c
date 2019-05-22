/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 	C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 		Vim | Gcc
 *  Date: 
 *  Description:
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
	// 1、写两个表达式,分别取整型变量 x 的个位和十位。
	int x = 295;
	int bit = x%10/1;
	int decade = (x%100)/10;

	printf("bit=%d\n", bit);
	printf("decade=%d\n", decade);

	return 0;	
}

