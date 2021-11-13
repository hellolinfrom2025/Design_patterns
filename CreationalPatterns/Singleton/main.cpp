// Singleton.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Singleton.h"

class Apple : public Singleton4<Apple>
{
public:
	void show()
	{
		std::cout << __FUNCTION__ << std::endl;
	}

private:
	CLASS_SINGLETON(Apple);
	Apple() {}
	virtual ~Apple()
	{
		std::cout << __FUNCTION__ << std::endl;
	}
};


int main()
{
	//
	Singleton* ptrInstance = Singleton::GetInstance();
	Singleton* ptrInstance2 = Singleton::GetInstance();
	std::cout << "pInstance:" << ptrInstance << " pInstance2:" << ptrInstance2 << std::endl;
	ptrInstance->DoSomething();
	ptrInstance2->DoSomething();
	ptrInstance->ReleaseInstance();
	ptrInstance2->ReleaseInstance();

	auto ptrInstance3 = Singleton2::GetInstance();
	auto ptrInstance4 = Singleton2::GetInstance();
	std::cout << "pInstance:" << ptrInstance3 << " pInstance2:" << ptrInstance4 << std::endl;
	ptrInstance3->DoSomething();
	ptrInstance4->DoSomething();
	ptrInstance3->ReleaseInstance();
	ptrInstance4->ReleaseInstance();

	auto& instance = Singleton3::GetInstance();
	Singleton3& instance2 = Singleton3::GetInstance();
	std::cout << "instance:" << &instance << " instance2:" << &instance2 << std::endl;
	instance.DoSomething();
	instance2.DoSomething();

	//
	Apple& pa1= Apple::GetInstance();
	pa1.show();

	system("pause");
	return 0;
}

