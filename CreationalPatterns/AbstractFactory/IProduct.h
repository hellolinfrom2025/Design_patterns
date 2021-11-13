#ifndef AbstractProduct_h__
#define AbstractProduct_h__
#include <string>

//抽象产品A接口
class IProductA
{
public:
	virtual ~IProductA() =default;
	virtual std::string UsefulFunctionA() const = 0;
};

class IProductB
{
public:
	virtual ~IProductB() =default;
	virtual std::string UsefulFunctionB() const = 0;
	/**
	 * 抽象工厂确保它创建的所有产品都是相同系列，因此是兼容的。
	 */
	virtual std::string AnotherUsefulFunctionB(const IProductA&collaborator) const = 0;
};

#endif // AbstractProduct_h__
