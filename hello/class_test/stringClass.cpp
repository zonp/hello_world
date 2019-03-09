// 已知类 String 的原型为:
// 编写类 String 的构造函数、析构函数和赋值函数

#include <iostream>

using namespace std;


class String
{
	public:
		String(const char *str = NULL); // 普通构造函数
		String(const String &other); // 拷贝构造函数
		~ String(void);
		// 析构函数
		String & operate =(const String &other); // 赋值函数
	private:
		char	*m_data;
		// 用于保存字符串
};
