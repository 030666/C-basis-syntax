#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//��̬
//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "����˵��" << endl;
	}
};
//è��
class Cat :public Animal
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������
void dospeak(Animal &animal)//Animal &animal=cat;
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);
}
int main()
{
	test01();
	system("pause");
	return 0;
}