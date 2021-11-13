#ifndef FactoryImpl_h__
#define FactoryImpl_h__
#include "AbstractFactory.h"

/**
 * 具体工厂生产属于单一系列的产品族。工厂保证生产的产品是兼容的。
 * 注意，工厂方法返回一个抽象的产品，而在方法内部实例化一个具体的产品。
 */
class ConcreteFactory1 : public AbstractFactory
{
public:
	std::shared_ptr<IProductA> CreateProductA() const override;
	std::shared_ptr<IProductB> CreateProductB() const override;
};

//每一个具体的工厂都会产生一系列的产品
class ConcreteFactory2 : public AbstractFactory
{
public:
	std::shared_ptr<IProductA> CreateProductA() const override;
	std::shared_ptr<IProductB> CreateProductB() const override;
};
#endif // FactoryImpl_h__
