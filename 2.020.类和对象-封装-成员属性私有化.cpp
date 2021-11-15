#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的可读性  写入的时候可以进行判断

//设计人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄  只读
	int getAge()
	{
		m_Age = 0;//初始化年龄
		return m_Age;
	}
	//设置情人  只写
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//姓名	可读可写
	string m_Name;
	//年龄	只读
	int m_Age;
	//情人	只写
	string m_Lover;
};
int main()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;

	//p.m_Age=18  报错因为这个成员是私有的，只能读不能写
	cout << "年龄为：" << p.getAge() << endl;

	//设置情人为苍井
	p.setLover("苍井");
	//cout << "情人为：" << p.m_Lover << endl;  报错 只能写不能读
	system("pause");
	return 0;
}
