/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-06-01 01:15
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

/*
 *	用堆栈解决一个有意思的问题，定义一个二维数组：
 *
 *	int maze[5][5] = {
 *			0, 1, 0, 0, 0,
 *			0, 1, 0, 1, 0,
 *			0, 0, 0, 0, 0,
 *			0, 1, 1, 1, 0,
 *			0, 0, 0, 1, 0,
 *	};
 *
 *	它表示一个迷宫，其中的1表示墙壁，0表示可以走的路，
 *	只能横着走或竖着走，不能斜着走，要求编程序找出从左
 *	上角到右下角的路线
 *
 *
 */


#include <stdio.h>

// 迷宫大小
#define ROW 5
#define COL 5

// 坐标， 堆栈
struct point { int row, col; } stack[512];


// 迷宫
int maze[ROW][COL] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0,
};

//堆栈操控

int top = -1;
void push(struct point p)
{
	top++;
	stack[top] = p;
}

struct point pop()
{
	return stack[top--];
}

int is_empty()
{
	return top == -1;
}

struct point predecessor[ROW][COL] = {
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
};

void print_maze()
{
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++)
			printf("%d ", maze[row][col]);
		putchar('\n');
	}
	printf("**********\n");
}

void visit(int row, int col, struct point pre)
{
	struct point visit_point = {row, col};

	maze[row][col] = 2;

	predecessor[row][col] = pre;

	push(visit_point);
}


int main(int argc, char *argv[])
{
	struct point p = { 0, 0 };
	maze[p.row][p.col] = 2;
	push(p);
	while(!is_empty()){
		p = pop();
		if (p.row == ROW -1 && p.col == COL -1)
			break;
		if (p.row+1 < ROW && maze[p.row+1][p.col] == 0) /* down */
			visit(p.row+1, p.col, p);
		if (p.col+1 < COL && maze[p.row][p.col+1] == 0) /* right */
			visit(p.row, p.col+1, p);
		if (p.col-1 >= 0 && maze[p.row][p.col-1] == 0) /* left */
			visit(p.row, p.col-1, p);
		if (p.row-1 >= 0 && maze[p.row-1][p.col] == 0) /* up */
			visit(p.row-1, p.col, p);

		print_maze();
	}

	// 倒序打印行进坐标
	if (p.row == ROW -1 && p.col == COL -1)
	{
		printf("(%d, %d)\n", p.row, p.col);
		while(predecessor[p.row][p.col].row != -1)
		{
			p = predecessor[p.row][p.col];
			printf("(%d, %d)\n", p.row, p.col);
		}
	}
	else
	{
		printf("no path\n");
	}

	return 0;
}

