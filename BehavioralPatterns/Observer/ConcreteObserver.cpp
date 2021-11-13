#include "ConcreteObserver.h"

#include <iostream>

ConcreteObserver::ConcreteObserver()
{

}

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::update(void *pArg)
{
	std::cout << (char*)pArg << std::endl;
}
