#include <stdio.h>

/** 19.从键盘输入10个数，统计非正数的个数，并计算非正数的和。 **/

int main()
{
	int sum = 0;
	int num[10];

	int non_positive_number = 0;


	printf("please input 10 integer :\n");

	scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);

	for (int i=0; i<10; i++)
	{
		if (num[i] <= 0) {
			++non_positive_number;
			sum += num[i];
		}
	}

	printf(" Non-positive number is : %d\n", non_positive_number);
	printf("Non-positive sum is : %d\n", sum);

	return 0;
}
