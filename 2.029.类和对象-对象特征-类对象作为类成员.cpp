#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
#include<string>
using namespace std;
//�������Ϊ������Ա
// �ֻ���
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone���������ĵ���" << endl;
	}
	//�ֻ�Ʒ������
	string m_PName;
};


//����
class Person
{
public:
	////Phone m_Phone=pName
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{

	}
	~Person()
	{
		cout << "Person�����������ĵ���" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};
//�������������Ϊ�����Ա������ʱ���ȹ���������ڹ�������������˳���빹���෴
void test01()
{
	Person p("����", "ƻ��");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}