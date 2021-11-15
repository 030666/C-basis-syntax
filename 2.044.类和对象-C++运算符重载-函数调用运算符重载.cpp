#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;

//函数调用运算符重载
//打印输出类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void myprint01(string test)
{
	cout << test << endl;
}
void test01()
{
	MyPrint myprint;
	myprint("hello world");//由于使用起来非常类似于函数调用，因此被称作仿函数

	myprint01("hello world");
}
//仿函数非常灵活，没有固定的写法
//加法类
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	Myadd myadd;
	int ret=myadd(100, 100);
	cout << "ret= " << ret << endl;

	//匿名函数对象
	cout << Myadd()(100, 100);
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}