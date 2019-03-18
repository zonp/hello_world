#include <stdio.h>

/** 4.从键盘输入10个数，统计非负数的个数，并计算非负数的和。 **/

int main()
{
	int num[10], number=0, sum=0;

	printf("请输入１０个数（　例如1, -1一逗号分割)：\n");

	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);

	printf("input Number is: \n");
	for(int i=0;i<10;i++) {
		printf("%d\t", num[i]);
		if (num[i] >=0){
			++number;
			sum+=num[i];
		}
	}
	printf("\n");




	printf("非负数的个数是：%d\n", number);
	printf("非负数的和是：%d\n", sum);

	return 0;
}
