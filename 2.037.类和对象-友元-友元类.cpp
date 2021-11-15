#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
//类做友元
class Building;
class Goodgay
{
public:
	Goodgay();
public:
	void visit();//参观函数  访问Building中的属性
	Building* building;
};
class Building
{
	//Goodgay是本类的好朋友，可以访问本类中私有成员
	friend class Goodgay;
public:
	Building();
public:
	string m_Sittingroom;//客厅
private:
	string m_Bedroom;//卧室

};
//类外写成员函数
Building::Building()
{
	m_Sittingroom = "客厅";
	m_Bedroom = "卧室";
}
Goodgay::Goodgay()
{
	//创建一个建筑物对象
	building = new Building;
}
void Goodgay::visit()
{
	cout << "好基友类正在访问：" << building->m_Sittingroom << endl;

	cout << "好基友类正在访问：" << building->m_Bedroom << endl;
}
void test01()
{
	Goodgay gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}