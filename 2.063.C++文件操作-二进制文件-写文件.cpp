#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<fstream>
using namespace std;
//�������ļ� д�ļ�
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//1������ͷ�ļ�
	//2������������
	ofstream ofs;
	//3���򿪷�ʽ
	ofs.open("Person.txt", ios::out | ios::binary);
		//4��д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));
	//�ر��ļ�
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}