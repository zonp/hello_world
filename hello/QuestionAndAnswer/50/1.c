// 1.求100之内自然数中最大的能被17整除的数
//
// 思路：
//		a. 获取100以内所有能够被17整除的数，排序获取最大的数，输出
//		b. 从100开始，找到的第一个能够被17整除的数即是
//
//

#include <stdio.h>

#define MAX 100
#define MIN 1
#define DIVISOR 17

#define LEN MAX/DIVISOR


int methodA()
{
	//定义一个数组，保存结果
	//排序
	//获取最大值
	int result[LEN] = {0};
	int i=0,j=MIN;

	for(;j<=MAX;j++){
		if(j%DIVISOR ==0){
			result[i]=j;
			++i;
		}
	}

	// 倒序
	int tmp;
	
	// m确定循环轮数 3
	// n确定每轮比较的次数
	for(int m=LEN; m>1;m--){
		
		for(int n=1;n<m;n++){
			
			// 更大，交换位置
			if(result[n] > result[n-1]){
				tmp = result[n-1];
				result[n-1] = result[n];
				result[n] = tmp;
			}
		}
	}
	
	printf(" 数组中的数据：\n");
	for(int o=0;o<LEN;o++){
		if(o%5==0){
			printf("\n");
		}
		printf("\t%d\t", result[o]);
	}
	
	printf("\n");
	printf("\n");

	return result[0];
}


int methodB()
{
	int result = MAX;

	for(;result>=MIN;result--){
		if(result%DIVISOR == 0){
			break;
		}
	}

	return result;
}


int main()
{
	int a, b;

	a=methodA();
	b=methodB();

	printf("%d以内自然数中最大的能够被17整除的数是：\n", MAX);

	if (a < MIN){
		printf("方法a： 没有找到\n");
	} else {
		printf("方法a： %d\n", a);
	}


	if (b < MIN){
		printf("方法b： 没有找到\n");
	} else {
		printf("方法b： %d\n", b);
	}

	return 0;

}
