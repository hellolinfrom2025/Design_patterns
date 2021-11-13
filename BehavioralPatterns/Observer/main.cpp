// Observer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include"ConcreteObserver.h"
#include"ConcreteObserverable.h"

int main()
{
	ConcreteObserverable news;
	std::cout << news.getObserverCount() << std::endl;
	ConcreteObserver user1;
	ConcreteObserver user2;

	news.attach(&user1);
	news.attach(&user2);
	std::cout << news.getObserverCount() << std::endl;
	news.sendSomeNews("hi,what's up!");

	news.detach(&user1);
	std::cout << news.getObserverCount() << std::endl;
	news.sendSomeNews("hi,what's up!");

	news.detachAll();
	std::cout << news.getObserverCount() << std::endl;
	news.sendSomeNews("hi,what's up!");
	return 0;
}

