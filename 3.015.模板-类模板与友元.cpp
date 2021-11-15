#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
//通过全局函数打印Person信息
//提前让编译器知道Person类
template<class T1,class T2>
class Person;
//全局函数类外实现
//加空模板参数列表
//如果全局参数是类外实现，需要让编译器提前知道这个函数的存在
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "类外实现——姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}
template<class T1, class T2>
class Person
{
	//全局函数 类内实现
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	}
	//全局函数 类外实现
	friend void printPerson2<>(Person<T1, T2>p);
	
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

//全局函数在类内实现
void test01()
{
	Person<string, int>p("Tom", 20);
	printPerson(p);
}
//全局函数在类外实现
void test02()
{
	Person<string, int>p2("jerry", 20);
	printPerson2(p2);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}