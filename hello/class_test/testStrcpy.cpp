#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *strDest, const char *strSrc)
{
	int i = 0;
	while(*(strSrc+i) != 0){
		*(strDest + i) = *(strSrc + i);
		printf("'%d'\t", *(strSrc+i));
		printf("'%c'\t", *(strSrc+i));
		++i;
	}
	*(strDest + i) = *(strSrc + i);
	printf("'%d'\t", *(strSrc+i));
	printf("'%c'\t", *(strSrc+i));
	++i;



	return strDest;
}


int main()
{
	long int len = sizeof(char) * 100;
	char *str1 = NULL, str2[] = "hello world", *str3 = NULL;
	str1 = (char *)malloc(len);

	str3 = strcpy(str1, str2);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);

	return 0;
}
