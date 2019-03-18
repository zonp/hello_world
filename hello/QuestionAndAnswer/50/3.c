#include <stdio.h>

/** 3.计算并输出200—400之间不能被3整除的整数的和。 */
int  main()
{
	int max=0;
	for(int i=201;i<400;i++){
		if (i%3 != 0) {
			max += i;
		}
	}

	printf("200—400之间不能被3整除的整数的和为: %d\n", max);

	return 0;
}
