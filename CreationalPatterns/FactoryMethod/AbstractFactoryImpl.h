#ifndef ProductFactoryImpl_h__
#define ProductFactoryImpl_h__
#include "AbstractFactory.h"

//���幤��1
class ConcreteFactory1 : public AbstractFactory
{
	/**
	 * ��ע�⣬�÷�����ǩ����Ȼʹ�ó����Ʒ���ͣ���ʹ�����Ʒʵ�����ǴӸ÷������صġ�
	 * �����������߾Ϳ��Զ����ھ���Ĳ�Ʒ�ࡣ
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
