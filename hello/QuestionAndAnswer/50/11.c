#include <stdio.h>

/** 11.变成判断输入的整数的正负性和奇偶性。如果为正数，输出Z，如果为负数，输出F，如果为偶数，输出O，如果为正数，输出J。 **/

int main()
{
	int num;
	printf("please input a integer, \nI will determine that is posistive number, negative number, odd number or even number ???\n");

	scanf("%d", &num);
	
	printf("\n");
	if (num > 0)
	{
		printf("it's posistive (Z)\n");
	}
	else if(num < 0)
	{
		printf("it's negative number (F)\n");
	}
	else
	{
		printf("it's zero\n");
	}

	switch(num%2)
	{
		case -1:
		case 1:
			printf("it's odd number (J)\n");
			break;
		case 0:
			printf("it's even number (O)\n");
			break;
		default:
			printf("no integer ???\n");
	}


	return 0;
}
