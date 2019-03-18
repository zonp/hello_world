#include <stdio.h>

#define LEN 4
/** 10.求3行3列矩阵a[3][3]={1,2,3,4,5,6,7,8,9}非对角线上元素之和。 **/
/**		1  2  3		**/
/**		4  5  6		**/
/**		7  8  9		**/

/**		1  2  3  4		**/
/**		5  6  7  8		**/
/**		9  10 11 12		**/
/**		13 14 15 16		**/



int main()
{
	int sum = 0;
	int xLen = LEN;
	int yLen = LEN;
	//int a[LEN][LEN] = {1,2,3,4,5,6,7,8,9};
	int a[LEN][LEN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};


	for (int x=0; x < LEN; x++)
	{
		for (int y=0; y < LEN; y++)
		{
			if (x+y != LEN-1 && x != y )
			{
				sum += a[x][y];
			}
		}

	}

	printf("the sum is : %d\n", sum);

	return 0;
}
