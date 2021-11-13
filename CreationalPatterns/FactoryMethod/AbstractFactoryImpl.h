#ifndef ProductFactoryImpl_h__
#define ProductFactoryImpl_h__
#include "AbstractFactory.h"

//具体工厂1
class ConcreteFactory1 : public AbstractFactory
{
	/**
	 * 请注意，该方法的签名仍然使用抽象产品类型，即使具体产品实际上是从该方法返回的。
	 * 这样，创建者就可以独立于具体的产品类。
	 */
public:
	std::shared_ptr<IProduct> FactoryMethod() const override;
};

class ConcreteFactory2 : public AbstractFactory
{
public:
	std::shared_ptr<IProduct> FactoryMethod() const override;
};
#endif // ProductFactoryImpl_h__
