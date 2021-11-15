#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
class Building;
class Goodgay
{
public:
	Goodgay();

	void visit();//让visit函数可以访问Building中的私有成员
	void visit2();//让visit2函数不可以访问Building中的私有成员
	Building* building;
};
class Building
{
	//告诉编译器Goodgay类下的visit函数作为本类的好朋友 可以访问私有成员
	friend void Goodgay::visit();
public:
	Building();
public:
	string m_Sittingroom;//客厅
private:
	string m_Bedroom;//卧室
};
//类外实现成员函数
Building::Building()
{
	m_Sittingroom = "客厅";
	m_Bedroom = "卧室";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	cout << "visit 函数正在访问 " << building->m_Sittingroom << endl;

	cout << "visit 函数正在访问 " << building->m_Bedroom<< endl;
}
void Goodgay::visit2()
{
	cout << "visit2 函数正在访问 " << building->m_Sittingroom << endl;
}
void test01()
{
	Goodgay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}