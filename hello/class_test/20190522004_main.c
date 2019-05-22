/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 			Vim | Gcc
 *  Create time:    2019-05-22 22:34
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 10, b;
	__asm__("movl %1, %%eax\n\t"
			"movl %%eax, %0\n\t"
			:"=r"(b)			/* output */
			:"r"(a)				/* input */
			:"%eax"				/* clobbered register */
		   );

	printf("Result is: %d, %d \n", a, b);
	return 0;	
}

