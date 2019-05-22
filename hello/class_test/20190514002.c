/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:	C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:		Vim | Gcc
 *  Date:
 *  Description:
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

void myFun(int x)
{
	int bit = x%10/1;
	int decade = (x%100)/10;

	printf("bit=%d\n", bit);
	printf("decade=%d\n", decade);
}
int main(int argc, char *argv[])
{
	// 写一个函数,参数是整型变量 x ,功能是打印 x 的个位和十位
	int x = 234;

	myFun(x);

	return 0;
}

