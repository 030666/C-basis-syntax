#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//�������ص�ע������
//1��������Ϊ���ص�����
void func(int &a)	//�ڶ�������������Ϊint &a=10 ���ǲ��Ϸ���
{
	cout << "func(int &a)�ĵ���" << endl;
 }
void func(const int& a)		//const int &a=10 �Ϸ����Եڶ�����������������
{
	cout << "func(const int &a)�ĵ���" << endl;
}
//2��������������Ĭ�ϲ���
void func2(int a,int b=10)
{
	cout << "func(int a,int b)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
int main()
{
	//int a = 10;
	//func(a);	��������µ��õ�һ������
	//func(10);	//��������µ��õڶ�������
	//func2(10);//��������������Ĭ�ϲ��������ֶ����ԣ����󣬾��������������
	system("pause");
	return 0;
}