#include <stdio.h>
#define INIT_HEIGHT 100


/** 22.一个皮球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。求当它第10此落地式时，共经过了多少米，第10次反弹多高？
 *
 * **/

int main()
{
	/** 初始高度 **/
	int max = 100;
	/** 经过的距离 **/
	double length = 0;
	/** 弹起的高度 **/
	 float height = INIT_HEIGHT;

	for (int i=1; i<=10; i++)
	{
		length += (height + height/2);
		height = height/2;
		
		if (i == 10)
		{
			printf("第１０次落地时，共经过%f米\n", length);
			printf("第１０次反弹的高度是%f\n", height);
		}
	}
	return 0;
}
