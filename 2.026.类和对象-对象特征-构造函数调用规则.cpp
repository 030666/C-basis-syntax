#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//  ���캯�����ù���
// Ĭ������£�C++���������ٸ�һ���������������
// 1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
// 2��Ĭ�������������޲Σ�������Ϊ�գ�
// 3��Ĭ�Ͽ������캯���������Խ���ֵ����
//
//  ���캯�����ù������£�
//  ����û������вι��캯����C++�����ṩĬ���޲ι��쵫�ǻ��ṩĬ�Ͽ������� 
//  ����û����忽�����캯����C++�������ṩ�������캯��
class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
	//}
	Person(int age)
	{
		cout << "Person���вι��캯���ĵ���" << endl;
		m_Age = age;
	}
	/*Person(const Person& p)
	{
		cout << "Person�Ŀ������캯���ĵ���" << endl;
		m_Age = p.m_Age;
	}*/
	~Person()
	{
		cout << "Person���������캯���ĵ���" << endl;
	}
	int m_Age;
};
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
void test02()
{
	Person p(18);
	Person p2(p);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}