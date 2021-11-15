#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
//类模板与函数模板区别
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name= " << this->m_Name << "age= " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//1、类模板没有自动类型推导使用方式
void test01()
{
	//Person p("孙悟空", 1000);错误，无法用自动类型推导
	Person<string, int>p("孙悟空",1000);//只能用显示指定类型
	p.showPerson();
}
//2、类模板在模板参数列表中可以有默认参数
//第6行代码可以改为 template<class NameType,class AgeType=int>
//第35行改为 Person<string>p("猪八戒", 999);

void test02()
{
	Person<string, int>p("猪八戒", 999);
}
int main()
{
	test01();
	system("pause");
	return 0;
}