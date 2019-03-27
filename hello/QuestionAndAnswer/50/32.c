#include <stdio.h>

/** 15. 输出所有200-400以内能被3整除且个位数字为7的整数。 **/

int main()
{
	printf("200-400以内能被3整除且个位数字为7的整数:\n");
	for (int i=200; i<400; i++)
	{
		if (i%3 == 0 && i%10 == 7) 
		{
			printf("%d\t", i);
		}
	}

	return 0;
}
