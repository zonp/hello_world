/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-17 19:34
 *  Last modified:  2019-05-17 19:45
 *  Last modified:  2019-05-17 19:45
 *  Last modified:  2019-05-17 19:45
 *  Last modified:  2019-05-17 19:45
 *  Last modified:  2019-05-17 19:45
 *  Last modified:  2019-05-17 19:43
 *  Last modified:  2019-05-17 19:43
 *  Last modified:  2019-05-17 19:43
 *  Last modified:  2019-05-17 19:41
 *  Last modified:  2019-05-17 19:41
 *  Last modified:  2019-05-17 19:39
 *  Last modified:  2019-05-17 19:38
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

void testFun(int x, int y, int z)
{
	printf("x=%d, y=%d, z=%d\t", x, y, x);
	if (x<3 && y>3)
		printf("*A* condition: x<3 && y> 3\t"),
			printf("Test OK!\n");
	else if (x>=3 && y>=3)
		printf("*B* condition: x>=3 && y>= 3\t"),
			printf("Test OK!\n");
	else if (z>3 && x>=3)
		printf("*C* condition: z>3 && x>= 3\t"),
			printf("Test OK!\n");
	else if (z<=3 && y>=3)
		printf("*D* condition: z <=3 && y>= 3\t"),
			printf("Test OK!\n");
	else
		printf("*E* condition: z<=3 && y>= 3的else\t"),
			printf("Test failed!\n");
}
int main(int argc, char *argv[])
{
	/*
	 *
	 * if (x<3 && y>3)
	 printf("Test OK!\n");
	 else if (x>=3 && y>=3)
	 printf("Test OK!\n");
	 else if (z>3 && x>=3)
	 printf("Test OK!\n");
	 else if (z<=3 && y>=3)
	 printf("Test OK!\n");
	 else
	 printf("Test failed!\n");
	 *
	 */

	for (int x=0; x<5; x++)
	{
		for (int y=0; y<5; y++)
		{
			for (int  z=0;  z<5; z++)
			{
				testFun(x, y, z);
			}
		}
	}


	return 0;
}

