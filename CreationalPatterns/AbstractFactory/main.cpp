#include <iostream>
#include "AbstractFactoryImpl.h"

/**
 * 客户端代码只能通过抽象类型(AbstractFactory和AbstractProduct)处理工厂和产品。
 * 这允许您将任何工厂或产品子类传递给客户端代码而不会破坏它。
 */
void ClientCode(const AbstractFactory &factory)
{
	auto ptrProductA = factory.CreateProductA();
	auto ptrProductB = factory.CreateProductB();
	std::cout << ptrProductB->UsefulFunctionB() << "\n";
	std::cout << ptrProductB->AnotherUsefulFunctionB(*ptrProductA) << "\n";
}

int main()
{
	std::cout << "Client: Testing client code with the first factory type:\n";
	auto f1 = std::make_unique<ConcreteFactory1>();
	ClientCode(*f1);
	std::cout << std::endl;
	std::cout << "Client: Testing the same client code with the second factory type:\n";
	auto f2 =  std::make_unique<ConcreteFactory2>();
	ClientCode(*f2);

	system("pause");
	return 0;
}