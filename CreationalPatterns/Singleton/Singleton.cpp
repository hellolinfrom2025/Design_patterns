#include "Singleton.h"
#include <iostream>
#include <fstream>

#pragma region Singleton
std::shared_ptr<Singleton> Singleton::g_ptrInstance = nullptr;
std::mutex Singleton::g_mutex;

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}
// ���� - ����ʽ��˫���� DCL ���ƣ��̰߳�ȫ
Singleton* Singleton::GetInstance()
{
	if (nullptr == g_ptrInstance) {
		std::lock_guard<std::mutex> lock(g_mutex);
		if (nullptr == g_ptrInstance) {
			g_ptrInstance = std::shared_ptr<Singleton>(new Singleton,
				[](Singleton* p) {
				if (p != nullptr) {
					delete p;
					p = nullptr;
				}
			});
		}
	}
	return g_ptrInstance.get();
}

void Singleton::ReleaseInstance()
{
	if (nullptr != g_ptrInstance) {
		std::lock_guard<std::mutex> lock(g_mutex);
		if (nullptr != g_ptrInstance) {
			g_ptrInstance.reset();
		}
	}
}

void Singleton::DoSomething()
{
	if (nullptr != g_ptrInstance) {
		std::cout << "singleton instance doing something." << std::endl;
	}
}
#pragma endregion Singleton

#pragma region Singleton2
std::atomic<Singleton2*> Singleton2::g_atmInstance;
std::mutex Singleton2::g_mutex;

class GC
{
	GC() {};
	~GC()
	{
		Singleton2::ReleaseInstance();
	};
};

Singleton2::Singleton2()
{

}

Singleton2::~Singleton2()
{

}
// ˫���� + cpuָ�˳��ִ��
// 1. �����ڴ�
// 2. ִ�й��죬��ʼ��
// 3. ָ�븳ֵ
Singleton2* Singleton2::GetInstance()
{
	Singleton2 *tmp = g_atmInstance.load(std::memory_order_relaxed);
	std::atomic_thread_fence(std::memory_order_acquire);
	if (nullptr == tmp) {
		std::lock_guard<std::mutex> lock(g_mutex);
		tmp = g_atmInstance.load(std::memory_order_relaxed);
		if (nullptr == tmp) {
			tmp = new Singleton2;
			std::atomic_thread_fence(std::memory_order_release);
			g_atmInstance.store(tmp, std::memory_order_relaxed);
		}
	}
	return tmp;
}

void Singleton2::ReleaseInstance()
{
	Singleton2 *tmp = g_atmInstance.load(std::memory_order_relaxed);
	if (nullptr == tmp) {
		std::lock_guard<std::mutex> lock(g_mutex);
		tmp = g_atmInstance.load(std::memory_order_relaxed);
		if (nullptr == tmp) {
			delete tmp;
			tmp = nullptr;
			g_atmInstance.store(tmp, std::memory_order_release);
		}
	}
}

void Singleton2::DoSomething()
{
	if (nullptr != g_atmInstance) {
		std::cout << "singleton instance doing something." << std::endl;
	}
}
#pragma endregion Singleton2

#pragma region Singleton3
//�̰߳�ȫ C++11 stadic magic���ԣ�����������
Singleton3 & Singleton3::GetInstance()
{
	static Singleton3 instance;
	return instance;
}

Singleton3::Singleton3()
{

}
Singleton3::~Singleton3()
{

}

void Singleton3::DoSomething()
{
	std::cout << "singleton2 instance doing something." << std::endl;
}


#pragma endregion Singleton3

