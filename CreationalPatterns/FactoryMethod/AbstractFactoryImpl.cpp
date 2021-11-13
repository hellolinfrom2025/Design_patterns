#include "AbstractFactoryImpl.h"
#include "IProductImpl.h"

std::shared_ptr<IProduct> ConcreteFactory1::FactoryMethod() const
{
	return std::make_shared<ConcreteProduct1>();
}

std::shared_ptr<IProduct> ConcreteFactory2::FactoryMethod() const
{
	return std::make_shared<ConcreteProduct2>();
}
