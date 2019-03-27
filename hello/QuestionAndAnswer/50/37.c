#include <stdio.h>

/** 37.输入任意三个数，按从小到大的顺序输出。 **/

int main()
{
	int num[3] = {0};

	printf("please input three number: \n");

	scanf("%d, %d, %d", &num[0], &num[1], &num[2]);


	for (int j=3; j>0; --j)
	{
		for (int i=1; i<j; i++)
		{
			if (num[i] < num[i-1])
			{
				int tmp = num[i-1];
				num[i-1] = num[i];
				num[i] = tmp;
			}
		}
	}


	printf("new order is : ");
	for (int i=0; i<3; i++)
	{
		printf("%d\t", num[i]);
	}

	printf("\n");
	return 0;
}
