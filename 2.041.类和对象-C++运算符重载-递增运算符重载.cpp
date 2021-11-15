#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//重载递增运算符

//自定义整形
class Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger myint);
public:
	Myinteger()
	{
		m_Num = 0;
	}
	//重载前置++运算符  返回引用为了一直对一个数据进行递增操作
	Myinteger& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身返回
		return *this;
	}
	//重载后置++运算符  返回值，因为temp为局部变量，函数结束则销毁
	//operator++(int)  int代表占位参数  可以用于区分前置和后置递增 
	Myinteger operator++(int)
	{
		//先记录 当时结果
		Myinteger temp = *this;
		//后递增
		m_Num++;
		//最后将记录结果返回
		return temp;
	}
private:
	int m_Num;
};
//重载<<运算符
ostream& operator<<(ostream& cout, Myinteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	Myinteger myint;

	cout << myint << endl;
}
void test02()
{
	Myinteger myint;
	cout << myint++ << endl;
	cout << myint<< endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}