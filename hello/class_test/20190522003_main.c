/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-22 22:06
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
	// 测试平台是大端还是小端字节序
	typedef union {
		unsigned int xxx;

		unsigned char ch[4];
	}	demo_type;


	demo_type u = {0x61626364};

	for (int i=0;i<4;i++)
	{
		printf("%x\t", u.ch[i]);
	}

	printf("\n");
	return 0;
}

