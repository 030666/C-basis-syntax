#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//  构造函数调用规则
// 默认情况下，C++编译器至少给一个类添加三个函数
// 1、默认构造函数（无参，函数体为空）
// 2、默认析构函数（无参，函数体为空）
// 3、默认拷贝构造函数，对属性进行值拷贝
//
//  构造函数调用规则如下：
//  如果用户定义有参构造函数，C++不在提供默认无参构造但是会提供默认拷贝构造 
//  如果用户定义拷贝构造函数，C++不会再提供其他构造函数
class Person
{
public:
	//Person()
	//{
	//	cout << "Person的默认构造函数的调用" << endl;
	//}
	Person(int age)
	{
		cout << "Person的有参构造函数的调用" << endl;
		m_Age = age;
	}
	/*Person(const Person& p)
	{
		cout << "Person的拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
	}*/
	~Person()
	{
		cout << "Person的析构构造函数的调用" << endl;
	}
	int m_Age;
};
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
void test02()
{
	Person p(18);
	Person p2(p);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}