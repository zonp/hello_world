#include <stdio.h>

/** 30.求两个正整数的最大公约数。 **/

int main()
{
	unsigned int num1, num2, min;

	printf("please input two positive integer\n");

	scanf("%d, %d", &num1, &num2);

	min = num1 > num2 ? num2: num1;

	for (; min > 0; --min)
	{
		if ((num1 % min == 0) && (num2 % min ==0)) 
		{
			printf("The maximumm common factor of %d and %d is : %d\n", num1, num2, min);
			break;
		}
	}

	return 0;
}
