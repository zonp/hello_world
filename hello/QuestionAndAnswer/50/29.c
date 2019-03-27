#include <stdio.h>


/** 29.输入三个学生四门课的成绩{（60，70，65，75），（75,80,75,90），（95,75,90,65）}，计算每个学生的总分和平均成绩并输出，结果保留一位小数。
 *
 * **/

int main()
{
	float sum = 0;
	float average = 0;
	typedef struct
	{
		float score1;
		float score2;
		float score3;
		float score4;
	} ss;
	ss s[3];

	printf("please input three student score: \n");

	for (int i=0; i<3; i++)
	{
		scanf("%f, %f, %f, %f", &s[i].score1, &s[i].score2, &s[i].score3, &s[i].score4);
	}


	for (int i=0; i<3; i++)
	{
		printf("the score of student %d is : %.2f  %.2f	 %.2f  %.2f\n", i+1, s[i].score1, s[i].score2, s[i].score3, s[i].score4);

		sum = s[i].score1+s[i].score2+s[i].score3+s[i].score4;
		average = sum/4;

		printf("the sum of studnet %d is : %.1f\n", i+1, sum);
		printf("the average of student %d is : %.1f\n", i+1, average);
	}
	return 0;
}
