#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//函数重载的注意事项
//1、引用作为重载的条件
void func(int &a)	//第二种情况可以理解为int &a=10 这是不合法的
{
	cout << "func(int &a)的调用" << endl;
 }
void func(const int& a)		//const int &a=10 合法所以第二种情况调用这个函数
{
	cout << "func(const int &a)的调用" << endl;
}
//2、函数重载遇到默认参数
void func2(int a,int b=10)
{
	cout << "func(int a,int b)的调用" << endl;
}
void func2(int a)
{
	cout << "func(int a)的调用" << endl;
}
int main()
{
	//int a = 10;
	//func(a);	这种情况下调用第一个函数
	//func(10);	//这种情况下调用第二个函数
	//func2(10);//当函数重载碰到默认参数，出现二义性，错误，尽量避免这种情况
	system("pause");
	return 0;
}