#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵĿɶ���  д���ʱ����Խ����ж�

//�������
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����  ֻ��
	int getAge()
	{
		m_Age = 0;//��ʼ������
		return m_Age;
	}
	//��������  ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//����	�ɶ���д
	string m_Name;
	//����	ֻ��
	int m_Age;
	//����	ֻд
	string m_Lover;
};
int main()
{
	Person p;
	p.setName("����");
	cout << "����Ϊ��" << p.getName() << endl;

	//p.m_Age=18  ������Ϊ�����Ա��˽�еģ�ֻ�ܶ�����д
	cout << "����Ϊ��" << p.getAge() << endl;

	//��������Ϊ�Ծ�
	p.setLover("�Ծ�");
	//cout << "����Ϊ��" << p.m_Lover << endl;  ���� ֻ��д���ܶ�
	system("pause");
	return 0;
}
