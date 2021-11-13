#include <iostream>
#include "AbstractFactoryImpl.h"

/**
 * �ͻ��˴���ֻ��ͨ����������(AbstractFactory��AbstractProduct)�������Ͳ�Ʒ��
 * �����������κι������Ʒ���ഫ�ݸ��ͻ��˴���������ƻ�����
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