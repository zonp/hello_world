#include <stdio.h>


/** 23.输入0-200之内能被3整除且个位数字是6的整数。 **/

int main()
{
	printf("0-200之内能够被３整除且个位数字是６的整数有： \n");

	for (int i=0; i<200; i++)
	{
		if (i%3 == 0 && i%10 == 6)
		{
			printf("%d\t", i);
		}
	}

	printf("\n");
	return 0;
}
