#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//占位参数
//返回值类型 函数名（数据类型）
//目前阶段占位参数还用不到
//占位参数还可以有，默认参数
void func(int a，int)
{
	cout << "this a func" << endl;
}
int main()
{
	func(10);
	system("pause");
	return 0;
}