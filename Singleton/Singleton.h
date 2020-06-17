#pragma once
#ifndef DESIGN_PATTERNS_SINGLETON_H_
#define DESIGN_PATTERNS_SINGLETON_H_

#include <mutex>

class Singleton
{
public:
	static Singleton *getInstance();
	static void releaseInstance();
	void doSomething();

private:
	Singleton();
	~Singleton();
	Singleton(const Singleton& other) = delete;
	Singleton& operator=(const Singleton& rhs) = delete;

	static Singleton *s_pInstance;
	static std::mutex s_mutex;

};

//非真正意义的单例 
class Singleton2
{
public:
	static Singleton2 &getInstance();
	void doSomething();

private:
	Singleton2();
	~Singleton2();
	Singleton2(const Singleton2& other) = delete;
	Singleton2& operator=(const Singleton2& rhs) = delete;

};

#endif //DESIGN_PATTERNS_SINGLETON_H_

