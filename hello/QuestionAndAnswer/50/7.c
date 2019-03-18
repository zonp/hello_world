#include <stdio.h>

/** 7.编程计算1*2*3+3*4*5+。。。。+99*100*101的值。 */

int main()
{
	int sum=0;
	for(int i=1; i<100; i+=2)
	{
		sum += i*(i+1)*(i+2);
	}

	printf("the sum is: %d\n", sum);
	return 0;
}
