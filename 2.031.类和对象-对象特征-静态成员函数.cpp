#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//��̬��Ա����
//1�����ж�����ͬһ��
//2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��� ��̬��Ա����
		//m_B = 200;��̬��Ա���������Է��� �Ǿ�̬��Ա��������Ϊ�޷����ֵ������ĸ������m_B������
		cout << "static void func �ĵ���" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����
	//��̬��Ա����Ҳ���з���Ȩ�޵�
Private:
	static void func2()
	{
		cout << "static void func2 ����" << endl;
	}
};
 int Person::m_A=0;

void test01()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ������������
	Person::func();
	//Person::func2();������ʲ���˽�о�̬��Ա����
}
int main()
{
	test01();
	system("pause");
	return 0;
}