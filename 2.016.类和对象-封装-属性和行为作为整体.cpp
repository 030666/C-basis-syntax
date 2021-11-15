#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//圆周率
const double pi = 3.14;
//设计一个圆类，来求周长
//圆求周长的公式：2*pi*半径
//class 代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
public:
	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * pi * m_r;
	}

};
int main()
{
	//通过圆类 创建具体的圆（对象）
	//实例化  （通过一个类  创建一个对象的过程）
	Circle c1;
	//给圆对象 的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	return 0;
	system("pause");
}
/*	在VS2019中的结果为：
--------------------------
圆的周长为：62.8
--------------------------
/*