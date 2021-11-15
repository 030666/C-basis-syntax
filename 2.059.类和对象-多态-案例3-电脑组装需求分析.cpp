#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calaulate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象的内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void stroage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc,Memory*mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calaulate();

		m_vc->display();

		m_mem->stroage();
	}
private:
	CPU* m_cpu;//CPU的零件指针
	VideoCard* m_vc;//显卡的零件指针
	Memory* m_mem;//内存条零件指针

};

//具体厂商
//Inter厂商
class InterCpu :public CPU
{
public:
	virtual void calaulate()
	{
		cout << "Inter的cpu开始计算了" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始显示了" << endl;
	}
};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存开始存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCpu :public CPU
{
public:
	virtual void calaulate()
	{
		cout << "Lenovo的cpu开始计算了" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU* interCpu = new InterCpu;
	VideoCard* interCars = new InterVideoCard;
	Memory* interMem = new InterMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(interCpu, interCars, interMemory);
}
int main()
{
	test01();
	system("pause");
	return 0;
}