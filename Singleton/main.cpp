// Singleton.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Singleton.h"

int main()
{
	//
	Singleton *pInstance = Singleton::getInstance();
	Singleton *pInstance2 = Singleton::getInstance();
	std::cout << "pInstance:" << pInstance << " pInstance2:" << pInstance2 << std::endl;
	pInstance->doSomething();
	pInstance2->doSomething();
	pInstance->releaseInstance();
	pInstance2->releaseInstance();

	//多线程测试
	//for (int ii=0;ii<5;++ii)
	//{
	//	std::thread th;
	//}

	Singleton2& instance = Singleton2::getInstance();
	Singleton2& instance2 = Singleton2::getInstance();
	std::cout << "instance:" << &instance << " instance2:" << &instance2 << std::endl;
	instance.doSomething();
	instance2.doSomething();

	return 0;
}

