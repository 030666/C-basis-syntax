#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性

/*函数重载的满足条件
1、同一个作用域下
2、函数名相同
3、函数参数类型不同，或者个数不同，或者顺序不同*/
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)的调用" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)的调用" << endl;
}
//注意事项：
//函数的返回值不可以做为函数重载的条件
int main()
{
	func();
	func(10);
	func(2.9,3);
	func(3, 0.1);
	system("pause");
	return 0;
}
/*	在VS2019中的结果为：
---------------------------
func的调用
func(int a)的调用
func(double a,int b)的调用
func(int a,double b)的调用
--------------------------
*/
