#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;

int main()
{
	//1.����bool��������
	bool flag = true;//true��ʾ��
	cout << flag<< endl;
	flag = false;//false��ʾ��
	cout << flag << endl;
	//2.�鿴bool������ռ���ڴ�ռ�
	cout << "bool������ռ�Ŀռ䣺" << sizeof(bool) << endl;
	system("pause");
	return 0;
}