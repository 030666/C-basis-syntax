#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//��������
//�����ú�������ͬ����߸�����

/*�������ص���������
1��ͬһ����������
2����������ͬ
3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ*/
void func()
{
	cout << "func�ĵ���" << endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}
//ע�����
//�����ķ���ֵ��������Ϊ�������ص�����
int main()
{
	func();
	func(10);
	func(2.9,3);
	func(3, 0.1);
	system("pause");
	return 0;
}
/*	��VS2019�еĽ��Ϊ��
---------------------------
func�ĵ���
func(int a)�ĵ���
func(double a,int b)�ĵ���
func(int a,double b)�ĵ���
--------------------------
*/
