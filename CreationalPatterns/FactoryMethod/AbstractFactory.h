#ifndef AbstractProductFactory_h__
#define AbstractProductFactory_h__
#include <memory>
#include "IProduct.h"

//工厂基类，至少有一个创建产品的工厂方法，子类工厂实现它产生不同的、具体的产品
class AbstractFactory
{
	/**
	 * 提示：工厂方法也可能提供默认的实现。
	 */
public:
	virtual ~AbstractFactory() =default;
	virtual std::shared_ptr<IProduct> FactoryMethod() const = 0;
	/**
	 * 还要注意的是，尽管名为“创建者”，但创建者的主要职责并不是创造产品。
	 * 通常，它包含一些依赖于工厂方法返回的Product对象的核心业务逻辑。
	 * 子类可以通过覆盖工厂方法并从该方法返回不同类型的产品来间接更改该业务逻辑。
	 */
	std::string SomeOperation() const
	{
		auto ptrProduct = this->FactoryMethod();
		std::string result = "Creator: The same creator's code has just worked with " + ptrProduct->Operation();
		return result;
	}
};
#endif // AbstractProductFactory_h__
