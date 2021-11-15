#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//静态成员函数
//1、所有对象共享同一个
//2、静态成员函数只能访问静态成员变量
class Person
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问 静态成员变量
		//m_B = 200;静态成员函数不可以访问 非静态成员变量，因为无法区分到底是哪个对象的m_B的属性
		cout << "static void func 的调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量
	//静态成员函数也是有访问权限的
Private:
	static void func2()
	{
		cout << "static void func2 调用" << endl;
	}
};
 int Person::m_A=0;

void test01()
{
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名来访问
	Person::func();
	//Person::func2();类外访问不到私有静态成员函数
}
int main()
{
	test01();
	system("pause");
	return 0;
}