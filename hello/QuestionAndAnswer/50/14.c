#include <stdio.h>

/** 14.输入5个数求他们中的最大值和平均值并输出。 **/


int main()
{
	int max = 0;
	float average = 0;
	int num[5] = {0};

	printf("please enter five number :\n");
	scanf("%d, %d, %d, %d, %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	max = num[0];
	for (int i=0; i<5; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}

		average += num[i];
	}

	average /= 5;


	printf("the max number is : %d\n", max);
	printf("the average is : %f\n", average);

	return 0;
}
