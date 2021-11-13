#pragma once
#ifndef DESIGN_PATTERNS_SINGLETON_H_
#define DESIGN_PATTERNS_SINGLETON_H_
#include <mutex>
#include <memory>
#include <atomic>

class Singleton
{
public:
	static Singleton* GetInstance();
	static void ReleaseInstance();
	void DoSomething();

private:
	Singleton();
	~Singleton();
	Singleton(const Singleton& other) = delete;
	Singleton& operator=(const Singleton& rhs) = delete;

	static std::shared_ptr<Singleton> g_ptrInstance;
	static std::mutex g_mutex;
};

class Singleton2
{
public:
	static Singleton2* GetInstance();
	static void ReleaseInstance();
	void DoSomething();

private:
	Singleton2();
	~Singleton2();
	Singleton2(const Singleton2& other) = delete;
	Singleton2& operator=(const Singleton2& rhs) = delete;

	static std::atomic<Singleton2*> g_atmInstance;
	static std::mutex g_mutex;
	static class GC g_gc;
	friend class GC;
};

//非真正意义的单例 
class Singleton3
{
public:
	static Singleton3 &GetInstance();
	void DoSomething();

private:
	Singleton3();
	~Singleton3();
	Singleton3(const Singleton3& other) = delete;
	Singleton3& operator=(const Singleton3& rhs) = delete;
};

//可继承的单例类
template <class T>
class Singleton4
{
	//注意：此处不需要写class
	friend T;
public:
	static T& GetInstance()
	{
		static T ins;
		return ins;
	};

private:
	Singleton4() {}
	virtual ~Singleton4() {}
	Singleton4(const Singleton4 &) = delete;
	Singleton4 &operator=(const Singleton4 &) = delete;
};

//友元类，模板父类访问子类构造
#define CLASS_SINGLETON(classType)  friend class Singleton4<classType>;

#endif //DESIGN_PATTERNS_SINGLETON_H_

