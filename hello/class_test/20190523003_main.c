/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 			Vim | Gcc
 *  Create time:    2019-05-23 17:54
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

int a, b;

/* 
extern void push(char);
extern char pop(void);
extern int is_empty();
*/

#include "20190523003_stack.h"

int main(int argc, char *argv[])
{
	push('a');
	push('b');
	push('c');

	while(!is_empty())
		putchar(pop());

	putchar('\n');
	return 0;	
}

