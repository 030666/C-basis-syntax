#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
class Building;
class Goodgay
{
public:
	Goodgay();

	void visit();//��visit�������Է���Building�е�˽�г�Ա
	void visit2();//��visit2���������Է���Building�е�˽�г�Ա
	Building* building;
};
class Building
{
	//���߱�����Goodgay���µ�visit������Ϊ����ĺ����� ���Է���˽�г�Ա
	friend void Goodgay::visit();
public:
	Building();
public:
	string m_Sittingroom;//����
private:
	string m_Bedroom;//����
};
//����ʵ�ֳ�Ա����
Building::Building()
{
	m_Sittingroom = "����";
	m_Bedroom = "����";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	cout << "visit �������ڷ��� " << building->m_Sittingroom << endl;

	cout << "visit �������ڷ��� " << building->m_Bedroom<< endl;
}
void Goodgay::visit2()
{
	cout << "visit2 �������ڷ��� " << building->m_Sittingroom << endl;
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