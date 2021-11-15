#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
#include<string>
using namespace std;
//类对象作为类的类成员
// 手机类
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone析构函数的调用" << endl;
	}
	//手机品牌名称
	string m_PName;
};


//人类
class Person
{
public:
	////Phone m_Phone=pName
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{

	}
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};
//当其他类对象作为本类成员，构造时候先构造类对象，在构造自身，析构的顺序与构造相反
void test01()
{
	Person p("韩晨", "苹果");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}