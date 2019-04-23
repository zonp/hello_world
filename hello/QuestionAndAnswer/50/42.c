#include <stdio.h>
#include <assert.h>

/** 42.输出Fibonacci数列的前40项。 **/
/** 契数列以如下被以递推的方法定义：F(1)=1，F(2)=1, F(n)=F(n-1)+F(n-2)（n>=3，n∈N*）在现代物理 **/


int f(int n)
{
	assert(n>0);
	if (n==1  || n==2)
	{
		return 1;
	}

	return f(n-1) + f(n-2);
}

int main()
{
	int n=40;

	int fb1 = 1,fb2 = 1;

	int pre1 = 1, pre2 = 1;


	printf("fibonacci数列前４０列: \n%d\t%d\t", pre2, pre1);
	for (int i=3, fb; i<=40; i++)
	{
		if (i%10 == 0)
		{
			printf("\n");
		}

		fb = pre1 + pre2;
		printf("%d\t", fb);

		pre2 = pre1;
		pre1 = fb;

	}
	return 0;
}
