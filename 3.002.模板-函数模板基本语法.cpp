#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;

//����ģ��

//�������ν�������
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//�������������ͺ���
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
//����ģ��
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//���ú���ģ�彻��
	//���ַ�ʽʹ�ú���ģ��
	//1���Զ������Ƶ�
	mySwap(a, b);
	
	cout << "a= " << a << endl;
	cout << "b= " << b<< endl;

	double c = 1.1;
	double d = 2.2;
	//swapDouble(c, d);
	//2����ʾָ������
	mySwap<double>(c, d);
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}