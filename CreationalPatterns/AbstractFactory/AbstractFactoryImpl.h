#ifndef FactoryImpl_h__
#define FactoryImpl_h__
#include "AbstractFactory.h"

/**
 * ���幤���������ڵ�һϵ�еĲ�Ʒ�塣������֤�����Ĳ�Ʒ�Ǽ��ݵġ�
 * ע�⣬������������һ������Ĳ�Ʒ�����ڷ����ڲ�ʵ����һ������Ĳ�Ʒ��
 */
class ConcreteFactory1 : public AbstractFactory
{
public:
	std::shared_ptr<IProductA> CreateProductA() const override;
	std::shared_ptr<IProductB> CreateProductB() const override;
};

//ÿһ������Ĺ����������һϵ�еĲ�Ʒ
class ConcreteFactory2 : public AbstractFactory
{
public:
	std::shared_ptr<IProductA> CreateProductA() const override;
	std::shared_ptr<IProductB> CreateProductB() const override;
};
#endif // FactoryImpl_h__
