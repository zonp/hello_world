#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello world");
	printf("%s\n", str);
	return 0;
}
