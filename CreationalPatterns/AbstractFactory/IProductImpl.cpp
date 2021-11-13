#include "IProductImpl.h"

std::string ConcreteProductA1::UsefulFunctionA() const 
{
	return "The result of the product A1.";
}

//////////////////////////////////////////////////////////////////////////
std::string ConcreteProductA2::UsefulFunctionA() const
{
	return "The result of the product A2.";
}

//////////////////////////////////////////////////////////////////////////
std::string ConcreteProductB1::UsefulFunctionB() const
{
	return "The result of the product B1.";
}
/**
 * Product B1只能与变体Product A1一起正常工作。
 * 不过，它接受AbstractProductA的任何实例作为参数。
 */
std::string ConcreteProductB1::AnotherUsefulFunctionB(const IProductA &collaborator) const
{
	const std::string result = collaborator.UsefulFunctionA();
	return "The result of the B1 collaborating with ( " + result + " )";
}

//////////////////////////////////////////////////////////////////////////
std::string ConcreteProductB2::UsefulFunctionB() const
{
	return "The result of the product B2.";
}
std::string ConcreteProductB2::AnotherUsefulFunctionB(const IProductA &collaborator) const
{
	const std::string result = collaborator.UsefulFunctionA();
	return "The result of the B2 collaborating with ( " + result + " )";
}
