#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//������Ĭ�Ϻ���
//��������Լ��������ݣ������Լ������ݣ����û�У���ô����Ĭ��ֵ
//�﷨������ֵ���� ������ ���β�=Ĭ��ֵ��{}
int func(int a, int b=20, int c=30)
{
	return a + b + c;
}
//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴������Ҷ�������Ĭ��ֵ
//int func2(int a = 10, int b, int c)   ����Ǵ����
//{
//	return a + b + c;
//}
//2�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ��Ĭ�ϲ���
int func3(int a, int b);
int func3(int a=10, int b=10)
{
	return a+b;
}
int main()
{
	//cout << func(10,30) << endl;
	cout << func3(10, 10) << endl;
	return 0;
	system("pause");
}