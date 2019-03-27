#include <stdio.h>

/** 7.编程计算1*2*3+4*5*6+。。。。+97*98*99的值。 */

int main()
{
	int sum=0;
	for(int i=1; i<100; i+=3)
	{
		sum += i*(i+1)*(i+2);
	}

	printf("the sum is: %d\n", sum);
	return 0;
}
