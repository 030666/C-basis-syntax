#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//��ͨ�����ͺ���ģ�������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//			����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
int myAdd(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//c-99
	cout << myAdd(a, c) << endl;

	//�Զ������Ƶ������ᷢ������ת��
	
	//cout << myAdd02(a, c) << endl;�����Է�����ʽת��

	//��ʾָ������,�ᷢ����ʽ����ת��
	myAdd02<int>(a, c);
	cout << myAdd(a, c) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}