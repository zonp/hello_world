#include <stdio.h>

#define LEN 5
/** 9,编写一个程序，将一个一维数组的元素逆序存放并输出。例如，原顺序为1,2,3,4,5，逆序后为  5,4,3,2,1. **/

int main()
{
	int max = 0;
	int arr[LEN] = {1,2,3,4,5};

	printf("old array is: \n");
	for(int n=0; n < LEN; n++)
	{
		printf("%d\t", arr[n]);
	}
	printf("\n");

	if (LEN %2 == 0)
	{
		max = LEN / 2;
	}
	else
	{
		max = (LEN-1) / 2;
	}


	for (int i=0; i<max; i++)
	{
		int temp;
		int last = LEN - 1 - i;
		temp = arr[i];
		arr[i] = arr[last];
		arr[last] = temp;
	}

	printf("new array is: \n");
	for(int n=0; n < LEN; n++)
	{
		printf("%d\t", arr[n]);
	}
	printf("\n");

	return 0;
}
