#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//Բ����
const double pi = 3.14;
//���һ��Բ�࣬�����ܳ�
//Բ���ܳ��Ĺ�ʽ��2*pi*�뾶
//class �������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * pi * m_r;
	}

};
int main()
{
	//ͨ��Բ�� ���������Բ������
	//ʵ����  ��ͨ��һ����  ����һ������Ĺ��̣�
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	return 0;
	system("pause");
}
/*	��VS2019�еĽ��Ϊ��
--------------------------
Բ���ܳ�Ϊ��62.8
--------------------------
/*