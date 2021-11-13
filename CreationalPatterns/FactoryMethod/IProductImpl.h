#ifndef ProductImpl_h__
#define ProductImpl_h__
#include "IProduct.h"

//具体产品1
class ConcreteProduct1 : public IProduct
{
public:
	std::string Operation() const override;
};
class ConcreteProduct2 : public IProduct
{
public:
	std::string Operation() const override;
};
#endif // ProductImpl_h__
