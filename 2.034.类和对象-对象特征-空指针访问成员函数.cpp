#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//空指针调用成员函数  但是不能访问成员变量
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//应该是错误的，原因是因为传入的指针为NULL，m_Age前面默认加this指向成员函数所属的对象，此时没有对象哪里来的属性
		if (this == NULL)	//如果对象为空则直接退出，增强代码的健壮性
			return;
		cout << "age= " << m_Age << endl;
	}
	int m_Age;

};
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}
int main ()
{
	test01();
	system("pause");
	return 0;
}