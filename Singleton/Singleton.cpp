#include "Singleton.h"
#include <iostream>

Singleton *Singleton::s_pInstance=nullptr;
std::mutex Singleton::s_mutex;

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}
// 单例 - 懒汉式（双检锁 DCL 机制）线程安全
Singleton *Singleton::getInstance()
{
	if ( nullptr==s_pInstance)
	{
		std::lock_guard<std::mutex> lock(s_mutex); 
		if ( nullptr==s_pInstance)
		{
			s_pInstance = new Singleton();
		}
	}
	return s_pInstance;
}

void Singleton::releaseInstance()
{
	if (nullptr!= s_pInstance)
	{
		std::lock_guard<std::mutex> lock(s_mutex);
		if (nullptr != s_pInstance)
		{
			delete s_pInstance;
			s_pInstance = nullptr;
		}
	}
}

void Singleton::doSomething()
{
	if (nullptr!=s_pInstance)
	{
		std::cout << "singleton instance doing something."<<std::endl;
	}
}

#pragma region Singleton2
//线程安全
Singleton2 & Singleton2::getInstance()
{
	static Singleton2 instance;
	return instance;
}

Singleton2::Singleton2()
{

}
Singleton2::~Singleton2()
{

}

void Singleton2::doSomething()
{
	std::cout << "singleton2 instance doing something." << std::endl;
}


#pragma endregion Singleton2
