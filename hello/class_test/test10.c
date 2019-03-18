#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,a[10],*x,*y;
	
	for(int i=0;i<10;i++)
	{
		a[i] = i+2;
		printf("%d ", a[i]);
	}

	printf("\n");
	x=a,y=&a[5];
	printf("%d\n", *x+2);
	printf("%d\n", *x++);
	printf("%d\n", *x+5);
	printf("%ld\n", y-x);

	return 0;
}
