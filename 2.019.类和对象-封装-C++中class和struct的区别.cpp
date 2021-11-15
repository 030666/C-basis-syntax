#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
//在C++中class和struct唯一的区别就在于默认的访问权限不同
//区别：
//struct默认权限为公共 public
//class默认权限为私有 private
class C1
{
	int m_A;//默认权限是私有
};
struct C2
{
	int m_A;//默认权限是公共
};
using namespace std;
int main()
{
	C1 c1;
	//c1.m_A = 100; 在class里默认权限私有，因此类外不可访问
	C2 c2;
	c2.m_A = 100;//在struct默认的权限方式为公共，因此可以访问
	system("pause");
	return 0;
}