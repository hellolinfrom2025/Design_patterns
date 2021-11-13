#include "AbstractFactoryImpl.h"
#include "IProductImpl.h"

std::shared_ptr<IProductA> ConcreteFactory1::CreateProductA() const
{
	return std::make_shared<ConcreteProductA1>();
}
std::shared_ptr<IProductB> ConcreteFactory1::CreateProductB() const
{
	return std::make_shared<ConcreteProductB1>();
}

//////////////////////////////////////////////////////////////////////////
std::shared_ptr<IProductA> ConcreteFactory2::CreateProductA() const
{
	return std::make_shared<ConcreteProductA2>();
}
std::shared_ptr<IProductB> ConcreteFactory2::CreateProductB() const
{
	return std::make_shared<ConcreteProductB2>();
}
