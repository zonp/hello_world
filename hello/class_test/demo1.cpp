#include <iostream>
#include <stdlib.h>

using namespace std;


//  坐标
class Coordinate
{
	public:
		int x;
		int y;
		
		void printX()
		{
			cout << x << endl;
		}
		void printY()
		{
			cout << y << endl;
		}
};


int main()
{
	Coordinate coor;
	coor.x=10;
	coor.y=20;

	coor.printX();
	coor.printY();


	Coordinate *p = new Coordinate();

	// 内存分配失败
	if(p == NULL) {
		return 0;
	}
	p->x = 100;
	p->y = 200;

	p->printX();
	p->printY();

	// 释放内存
	delete p;
	// 重新初始化变量
	p = NULL;

	return 0;
}
