#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//��ͨʵ��ҳ��
//Java
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ��������ġ�վ�ڵ�ͼ...(�����ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(���������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��

//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ��������ġ�վ�ڵ�ͼ...(�����ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++...(���������б�" << endl;
	}
};
//�̳еĺô��������ظ�����
// �﷨:class ���ࣺ�̳з�ʽ ����
// ���� Ҳ��Ϊ ������
// ���� Ҳ��Ϊ ����
//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();
}
int main()
{
	test01();
	system("pause");
	return 0;	
}