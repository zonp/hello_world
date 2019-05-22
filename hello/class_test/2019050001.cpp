#include "test2.h"


Teacher::Teacher()
{
	cout << "Teacher::Teacher" << endl;
}

Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea" << endl;
}

Teacher::~Teacher()
{
	cout << "~Teacher" << endl;
}

void Teacher::setName(string _name)
{
	m_strName = _name;
}
string Teacher::getName()
{
	return m_strName;
}
void Teacher::setGender(string _gender)
{
	m_strGender = _gender;
}
string Teacher::getGender()
{
	return m_strGender;
}
void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}
void Teacher::teach()
{
	cout << "老师讲课了!" << endl;
}

int main()
{
	Teacher *t = new Teacher();

	t->setName("王老师");
	t->setGender("女");
	t->setAge(25);

	cout << t->getName() << " " << t->getGender() << " " << t->getAge() << endl;

	t->teach();


	delete t;
	t = NULL;

	return 0;
}


