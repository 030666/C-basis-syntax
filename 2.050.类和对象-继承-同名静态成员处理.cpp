#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//继承中的同名静态成员处理方式
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-static void func()" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son-static void func()" << endl;
	}
};
int Son::m_A = 200;
//同名成员属性
void  test01()
{
	//1、通过对象来访问
	cout << "通过对象来访问：" << endl;
	Son s;
	cout << "Son 下 m_A= " << s.m_A << endl;
	cout << "Base 下 m_A= " << s.Base::m_A << endl;
	//2、通过类名来访问
	cout << "通过类名来访问：" << endl;
	cout << "Son 下 m_A= " << Son::m_A << endl;
	//第一个：：代表通过类名方式访问  第二个：：代表父类作用域下
	cout << "Base 下 m_A= " <<Son::Base::m_A << endl;
}
//同名静态成员函数
void test02()
{
	//通过对象访问
	cout << "通过对象来访问：" << endl;
	Son s;
	s.func();
	s.Base::func();
	//通过类名访问
	cout << "通过类名来访问：" << endl;
	Son::func();
	Son::Base::func();
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}