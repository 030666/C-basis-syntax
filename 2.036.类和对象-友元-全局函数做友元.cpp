#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;
//��������
class Building
{
	//goodgayȫ�ֺ�����Building�����ѣ����Է���Building�е�˽�г�Ա
	friend void goodgay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//ȫ�ֺ���
void goodgay(Building* building)
{
	cout << "�û���ȫ�ֺ���  ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û���ȫ�ֺ���  ���ڷ��ʣ�" << building->m_BedRoom<< endl;
}
void test01()
{
	Building building;
	goodgay(&building);
}
int main()
{
	test01();
	system("Pause");
	return 0;
}