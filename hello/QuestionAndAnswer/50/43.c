#include <stdio.h>

/** 43.判断某一年是否是闰年。 **/

int main()
{
	int year;

	printf("please  enter year: ");
	scanf("%d", &year);

	if ((year%4 == 0 && year%100 != 0) || (year%400 == 0 && year %3200 != 0))
	{
		printf("润年\n");
	}
	else
	{
		printf("平年\n");
	}
	return 0;
}
