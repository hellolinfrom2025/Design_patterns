#ifndef AbstractFactory_h__
#define AbstractFactory_h__
#include <memory>
#include "IProduct.h"

/**
 * 抽象工厂接口声明了一组返回不同抽象产品的方法。
 * 这些产品被称为一个家族，由一个高层次的主题或概念联系在一起。
 * 一个家族的产品通常能够相互协作。
 * 一个产品系列可能有几个变体，但一个系列的产品与另一个系列的产品不兼容。
 */
class AbstractFactory
{
public:
	virtual std::shared_ptr<IProductA> CreateProductA() const = 0;
	virtual std::shared_ptr<IProductB> CreateProductB() const = 0;
};
#endif // AbstractFactory_h__
