#include <stdio.h>


int main(int argc, char *argv[])
{
	double i = 20.0;
	double j = i / 7.0;

	printf("%.90f, %.90f\n", j, j* 7.0);
	printf("%ld\n", sizeof(j));
	printf("%p\n", &i);

	if (j * 7.0 == i)
	{
		printf("Equal.\n");
	}
	else
	{
		printf("Unequal.\n");
	}
	return 0;
}

