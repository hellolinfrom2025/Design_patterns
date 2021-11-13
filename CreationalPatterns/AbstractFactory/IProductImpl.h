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
	 * Product B1ֻ�������Product A1һ������������
	 * ������������AbstractProductA���κ�ʵ����Ϊ������
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
