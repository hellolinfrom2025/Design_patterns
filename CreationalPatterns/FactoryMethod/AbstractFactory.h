#ifndef AbstractProductFactory_h__
#define AbstractProductFactory_h__
#include <memory>
#include "IProduct.h"

//�������࣬������һ��������Ʒ�Ĺ������������๤��ʵ����������ͬ�ġ�����Ĳ�Ʒ
class AbstractFactory
{
	/**
	 * ��ʾ����������Ҳ�����ṩĬ�ϵ�ʵ�֡�
	 */
public:
	virtual ~AbstractFactory() =default;
	virtual std::shared_ptr<IProduct> FactoryMethod() const = 0;
	/**
	 * ��Ҫע����ǣ�������Ϊ�������ߡ����������ߵ���Ҫְ�𲢲��Ǵ����Ʒ��
	 * ͨ����������һЩ�����ڹ����������ص�Product����ĺ���ҵ���߼���
	 * �������ͨ�����ǹ����������Ӹ÷������ز�ͬ���͵Ĳ�Ʒ����Ӹ��ĸ�ҵ���߼���
	 */
	std::string SomeOperation() const
	{
		auto ptrProduct = this->FactoryMethod();
		std::string result = "Creator: The same creator's code has just worked with " + ptrProduct->Operation();
		return result;
	}
};
#endif // AbstractProductFactory_h__
