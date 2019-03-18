#include <stdio.h>

_Bool check(int a, int b, int c);

/** 2.一只a，b，c都是1位整数，求当三位整数abc.cba的和为1333是a,b,c的值。  **/
int main()
{
	int a,b,c;
	printf("符合要求的ａ，ｂ，ｃ分别是\n");
	for (a=0; a<10; a++) {
		for (b=0; b<10; b++){
			for (c=0; c<10; c++){
				if(check(a, b, c)) {
					printf("%d\t%d\t%d\t\n", a, b, c);
				}
			}
		}
	}

	return 0;
}


_Bool check(int a,  int b, int c)
{
	return (a*100 + b*10 + c + c*100 + b*10 + a) == 1333;
}
