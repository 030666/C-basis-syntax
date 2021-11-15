#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}
	Person&  PersonAddage(Person &p)//引用方式返回，如果是返回类型为Person则会自动创建拷贝函数，最后值为20
	{
		this->age += p.age;
		//this是指向p2的指针，*this指向的就是p2这个对象的本体
		return *this;
	}
	int age;
};
//1、解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
 }
//2、返回对象本身用*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
	cout << "p2的年龄为：" << p2.age << endl; 
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}