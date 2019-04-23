#include <stdio.h>
#include <unistd.h>

/** 38.用1元人民币锐换5分，2分，1分的硬币共50枚，每种硬币至少1枚，
 * 问共有多少种锐换方案，输出每一种方案三种硬币的数量。
 *
 * **/

int main()
{
	int plan = 0;
	//   5a+2b+c =  100
	// a < 20 && a > 0
	// b < 50 && b > 0
	// c <  100 && c > 0
	

	int times = 0;

	/**
	int maxA = (100 -3)/5;
	for (int a = 1; a <= maxA; ++a)
	{
		for (int b = 1,maxB = (100-5*a - 1)/2; b <= maxB; ++b)
		{
			for (int c = (100 - 5*a - 2*b); c > 0; --c)
			{
				++times;
				if ((5*a + 2*b + c) == 100)
				{
					++plan;
					printf("方案%d: 5 %d\t2 %d\t1 %d\t\n", plan, a, b, c);
					break;
				}
			}
		}
	}

	**/


	int p = 0;
	for (int x = 1; x < 20; ++x)
	{
		for (int y = 1; y < 50; ++y)
		{
			for (int z=1; z<100; ++z)
			{
				if ((5*x + 2*y + z) == 100)
				{
					++p;
					break;
				}
			}
		}
		usleep(100);
	}

	printf("总共有%d种兑换方案\n", plan);
	printf("总共有%d种兑换方案\n", p);
	printf("times = %d\n", times);

	return 0;
}
