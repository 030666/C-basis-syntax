#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//���ص��������

//�Զ�������
class Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger myint);
public:
	Myinteger()
	{
		m_Num = 0;
	}
	//����ǰ��++�����  ��������Ϊ��һֱ��һ�����ݽ��е�������
	Myinteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�������
		return *this;
	}
	//���غ���++�����  ����ֵ����ΪtempΪ�ֲ���������������������
	//operator++(int)  int����ռλ����  ������������ǰ�úͺ��õ��� 
	Myinteger operator++(int)
	{
		//�ȼ�¼ ��ʱ���
		Myinteger temp = *this;
		//�����
		m_Num++;
		//��󽫼�¼�������
		return temp;
	}
private:
	int m_Num;
};
//����<<�����
ostream& operator<<(ostream& cout, Myinteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	Myinteger myint;

	cout << myint << endl;
}
void test02()
{
	Myinteger myint;
	cout << myint++ << endl;
	cout << myint<< endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}