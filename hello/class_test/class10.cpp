#include <stdio.h>
#define N 10
int a( int score[] )
{
	int	sum = 0;
	int	i;
	float	z;
	for ( i = 0; i < 10; i++ )
	{
		sum += score[i];
		printf( "总分：%d\n", sum );
	}
	z = sum / N;
	printf( "平均分：%f\n", z );
	return(0);
}


int b( int score[] )
{
	int i;
	int j;
	i = score[0];
	for ( j = 1; j < 10; j++ )
	{
		if ( score[j] > i )
		{
			i = score[j];
		}
	}
	printf( "最高分:%d\n", i );
	return(0);
}


int c( int score[] )
{
	int	i;
	int	j;
	i = score[0];
	for ( j = 1; j < 10; j++ )
	{
		if ( score[j] < i )
		{
			i = score[j];
		}
	}
	printf( "最低分:%d\n", i );
	return(0);
}


/* 快速排序 */
int d( int score[] )
{
	int	i;
	int	j;
	for ( i = N; i > 1; i-- )
	{
		for ( j = 1; j < i; j++ )
		{
			if ( score[j] > score[j - 1] )
			{
				int mtc;
				mtc		= score[j];
				score[j]	= score[j - 1];
				score[j - 1]	= mtc;
			}
		}
	}
	for ( int x = 0; x < N; x++ )
	{
		printf( "score[%d] = %d\n", x, score[x] );
	}
	return(0);
}
			

int main()
{
	int score[N] = { 67, 98, 75, 63, 82, 79, 81, 91, 66, 84 };
	a( score );
	b( score );
	c( score );
	d( score );

	return(0);
}
