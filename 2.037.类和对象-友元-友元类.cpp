#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
//������Ԫ
class Building;
class Goodgay
{
public:
	Goodgay();
public:
	void visit();//�ιۺ���  ����Building�е�����
	Building* building;
};
class Building
{
	//Goodgay�Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class Goodgay;
public:
	Building();
public:
	string m_Sittingroom;//����
private:
	string m_Bedroom;//����

};
//����д��Ա����
Building::Building()
{
	m_Sittingroom = "����";
	m_Bedroom = "����";
}
Goodgay::Goodgay()
{
	//����һ�����������
	building = new Building;
}
void Goodgay::visit()
{
	cout << "�û��������ڷ��ʣ�" << building->m_Sittingroom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_Bedroom << endl;
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