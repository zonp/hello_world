#include <iostream>
#include <string>

// 64 位的linux计算机测试

using namespace std;

void Func(char a[100])
{
	cout << sizeof(a) << endl;
}


int main()
{
	char a[] = "hello world";
	char *p = a;

	cout<< sizeof(a) << endl; // 12 字节
	cout<< sizeof(p) << endl; // 8 字节
	cout<< sizeof(*p) << endl; // 1 字节
	cout<< sizeof(int) << endl; // 4 字节
	cout<< sizeof(int *) << endl; // 8 字节
	cout<< sizeof(long) << endl; // 8 字节
	cout<< sizeof(char *) << endl; // 8 字节
	
	Func(a);

	return 0;
}
