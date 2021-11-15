#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calaulate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//������ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void stroage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc,Memory*mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ��������
	void work()
	{
		//������������������ýӿ�
		m_cpu->calaulate();

		m_vc->display();

		m_mem->stroage();
	}
private:
	CPU* m_cpu;//CPU�����ָ��
	VideoCard* m_vc;//�Կ������ָ��
	Memory* m_mem;//�ڴ������ָ��

};

//���峧��
//Inter����
class InterCpu :public CPU
{
public:
	virtual void calaulate()
	{
		cout << "Inter��cpu��ʼ������" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ��ʾ��" << endl;
	}
};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ濪ʼ�洢��" << endl;
	}
};

//Lenovo����
class LenovoCpu :public CPU
{
public:
	virtual void calaulate()
	{
		cout << "Lenovo��cpu��ʼ������" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ濪ʼ�洢��" << endl;
	}
};

void test01()
{
	//��һ̨�������
	CPU* interCpu = new InterCpu;
	VideoCard* interCars = new InterVideoCard;
	Memory* interMem = new InterMemory;

	//������һ̨����
	Computer* computer1 = new Computer(interCpu, interCars, interMemory);
}
int main()
{
	test01();
	system("pause");
	return 0;
}