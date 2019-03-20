#include <stdio.h>
#include <math.h>

/** 13.从键盘输入N和A的值，计算a+aa+aaa+aaaa+....+aa...a(n个a)的值。 **/

/**
 *	1 1a
 *	2 a*10+1a
 *	3 a*100+2a
 *	4 a*1000+3a
 *
 *	1 10^0*a
 *	2 10^1*a+1a
 *	3 10^2*a+2a
 *
 * */
int main()
{
	int sum = 0;
	int n = 0;
	int a = 0;
	int last = 0;

	printf("\nplease enter  the value of N: ");
	scanf("%d", &n);
	
	printf("\nplease enter the value of A: ");
	scanf("%d", &a);

	for (int i=0; i<n; i++)
	{
		/** printf("last=%d\t", last); **/
		last += pow(10, i) * a;
		/** printf("10^%d=%f\t", i, pow(10, i)); **/
		/** printf("last=%d\n", last); **/
		/** printf("sum=%d\t", sum); **/
		sum += last;
		/** printf("sum=%d\n", sum); **/
	}

	printf("a+aa+aaa+aaaa+....+aa...a(n个a)的值的值为：%d\n", sum);
	printf("%d+%d%d+%d%d%d+%d%d%d%d+....+%d%d...%d(%d个%d)的值的值为：%d\n", a, a, a, a, a, a, a, a, a, a, a, a, a, n, a, sum);


	return 0;
}
