#define  _CRT_SECURE_NO_WARNINGS  1
#include<iostream>
using namespace std;
//��ָ����ó�Ա����  ���ǲ��ܷ��ʳ�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//Ӧ���Ǵ���ģ�ԭ������Ϊ�����ָ��ΪNULL��m_Ageǰ��Ĭ�ϼ�thisָ���Ա���������Ķ��󣬴�ʱû�ж���������������
		if (this == NULL)	//�������Ϊ����ֱ���˳�����ǿ����Ľ�׳��
			return;
		cout << "age= " << m_Age << endl;
	}
	int m_Age;

};
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}
int main ()
{
	test01();
	system("pause");
	return 0;
}