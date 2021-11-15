#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;

int main()
{
	//1.创建bool数据类型
	bool flag = true;//true表示真
	cout << flag<< endl;
	flag = false;//false表示假
	cout << flag << endl;
	//2.查看bool类型所占的内存空间
	cout << "bool类型所占的空间：" << sizeof(bool) << endl;
	system("pause");
	return 0;
}