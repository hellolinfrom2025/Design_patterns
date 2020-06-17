#include "ConcreteObserverable.h"


ConcreteObserverable::ConcreteObserverable()
{

}

ConcreteObserverable::~ConcreteObserverable()
{

}

void ConcreteObserverable::sendSomeNews(std::string news)
{
	setChange("News:" + news);
}
