#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
//����Ȩ��  ����
//����Ȩ��  public       ��Ա ���ڿ��Է��� ������Է���
//����Ȩ��  protected	    ��Ա ���ڿ��Է��� ���ⲻ���Է���  ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ��  private       ��Ա ���ڿ��Է��� ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������
class Person
{
public:
	//����Ȩ��
	string m_Name;//����
protected:
	//����Ȩ��
	string m_Car;
private:
	//˽��Ȩ��
	int m_Password;//���п�����
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};
using namespace std;
int main()
{
	//ʵ��������
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";//����Ȩ�����ݲ��ɷ��ʣ���������ʲ���
	//p1.m_Password = 123;//˽��Ȩ�����ݣ���������ʲ���
	system("pause");
	return 0;
}