#define  _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1.����
	int a = 0;
	cout << "������α���a��ֵ��" << endl;
	cin >> a;
	cout << "���α���a= " << a << endl;
	//2.������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "����������f= " << f << endl;
	//3.�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ�����ֵ��" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch= " << ch<< endl; 
	//4.�ַ�����
	string str = "hello";
	cout << "����ַ�����ֵ��" << endl;
	cin >> str;
	cout << "�ַ���str= " << str << endl;
	//5.��������
	bool flag = false;
	cout << "�����������flag ��ֵ" << endl;
	cin >> flag;
	cout << "��������flag="<<flag << endl;

	system("pause");
	return 0;
}