#ifndef ProductImpl_h__
#define ProductImpl_h__
#include "IProduct.h"

class ConcreteProductA1 : public IProductA
{
public:
	std::string UsefulFunctionA() const override;
};

class ConcreteProductA2 : public IProductA
{
	std::string UsefulFunctionA() const override;
};

class ConcreteProductB1 : public IProductB
{
public:
	std::string UsefulFunctionB() const override;
	/**
	 * Product B1只能与变体Product A1一起正常工作。
	 * 不过，它接受AbstractProductA的任何实例作为参数。
	 */
	std::string AnotherUsefulFunctionB(const IProductA &collaborator) const override;
};

class ConcreteProductB2 : public IProductB
{
public:
	std::string UsefulFunctionB() const override;
	std::string AnotherUsefulFunctionB(const IProductA &collaborator) const override;
};
#endif // ProductImpl_h__
