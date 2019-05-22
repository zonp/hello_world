/* +++++++++++++++++++++++++++ */
/*
 *  Author: 		zzz
 *  FileType: 		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool: 			Vim | Gcc
 *  Create time:    2019-05-22 23:10
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

volatile unsigned char recv;
volatile unsigned char send;

unsigned char buf[3];

int main(int argc, char *argv[])
{
	buf[0] = recv;	
	buf[1] = recv;	
	buf[2] = recv;	


	send = ~buf[0];
	send = ~buf[1];
	send = ~buf[2];

	return 0;	
}

