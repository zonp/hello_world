#include <iostream>
#include <string>

using namespace std;

// 字符串初始化
//
// string  s1
// string s2("ABC");
// string s3(s2);
// string s4(n, 'c');
//
// string s;
// s.empty()
// s.size()
// s[n]
// s1 + s2
// s1 = s2
// v1 == v22
// v1 != v2
//

/*
 *
 * 题目描述：
 * 		1. 提示用户输入姓名
 * 		2. 接收用户的输入
 * 		3. 然后向用户问好， hello xxx
 * 		4. 告诉用户名字的长度
 * 		5. 告诉用户名字的首字母是什么
 * 		6. 如果用户直接输入回车，那么告诉用户的输入为空
 * 		7. 如果用户的输入是imooc， 那么告诉用户的角色是一个管理员
 *
 *
 */

int main()
{
	string name;
	cout << "请输入你的名称：" << endl;
	getline(cin, name);

	if(name.empty()){
		cout << "用户的输入为空" << endl;
		return 0;
	}

	if(name == "imooc") {
		cout << "用户的角色是一个管理员" << endl;
	}

	
	cout << "hello " + name << endl;

	cout << "名称的长度是: " <<  name.size() << endl;

	cout << "名称的首字母是： " << name[0] << endl;

	return 0;
}
