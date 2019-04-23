#include  <stdio.h>
#define PI 3.14

/** 39.从键盘输入圆的半径，计算并输出圆面积与周长，要求结果保留两位小数。 **/

int main()
{
	float r;
	printf("please input radius of the circle: ");

	scanf("%f", &r);

	printf("area is : %.2f\n",  PI * r * r);

	printf("perimeter is : %.2f\n", 2 * PI * r);

	return 0;
}
