#include<stdio.h>

int main()

{

	int max,j,k; //  分别为最大值 循环总次数 子循环次数,输出循环

	int arr[10] = {0};

	//定义一个十位数的预存空间

	int i;

	//定义循环常数输入十个

	for(i=0;i<=9;i++)

	{

		scanf("%d",&arr[i]);   //存入10个数

	}

	for(j=0;j<9;j++)

	{

		for(k=0;k<(9-j);k++)

		{

			if(arr[k]<=arr[k+1])

			{

				max=arr[k];

				arr[k]=arr[k+1];

				arr[k+1]=max;

			}

		}

	}

	for(j=0;j<=9;j++)

	{

		printf("%d",arr[j]);

		printf("\n");

	}

	return 0;

}
