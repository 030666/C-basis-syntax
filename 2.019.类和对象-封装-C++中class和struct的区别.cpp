#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
//��C++��class��structΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
//����
//structĬ��Ȩ��Ϊ���� public
//classĬ��Ȩ��Ϊ˽�� private
class C1
{
	int m_A;//Ĭ��Ȩ����˽��
};
struct C2
{
	int m_A;//Ĭ��Ȩ���ǹ���
};
using namespace std;
int main()
{
	C1 c1;
	//c1.m_A = 100; ��class��Ĭ��Ȩ��˽�У�������ⲻ�ɷ���
	C2 c2;
	c2.m_A = 100;//��structĬ�ϵ�Ȩ�޷�ʽΪ��������˿��Է���
	system("pause");
	return 0;
}