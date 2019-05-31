/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 			Vim | Gcc
 *  Create time:    2019-05-23 17:51
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

/* stack.c */

char stack[512];
static int top = -1;

void push(char c)
{
	++top;
	stack[top] = c;
}

char pop()
{
	return stack[top--];
}

int is_empty()
{
	return top == -1;
}
