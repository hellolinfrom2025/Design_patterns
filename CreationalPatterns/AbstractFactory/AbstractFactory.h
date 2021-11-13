#ifndef AbstractFactory_h__
#define AbstractFactory_h__
#include <memory>
#include "IProduct.h"

/**
 * ���󹤳��ӿ�������һ�鷵�ز�ͬ�����Ʒ�ķ�����
 * ��Щ��Ʒ����Ϊһ�����壬��һ���߲�ε�����������ϵ��һ��
 * һ������Ĳ�Ʒͨ���ܹ��໥Э����
 * һ����Ʒϵ�п����м������壬��һ��ϵ�еĲ�Ʒ����һ��ϵ�еĲ�Ʒ�����ݡ�
 */
class AbstractFactory
{
public:
	virtual std::shared_ptr<IProductA> CreateProductA() const = 0;
	virtual std::shared_ptr<IProductB> CreateProductB() const = 0;
};
#endif // AbstractFactory_h__
