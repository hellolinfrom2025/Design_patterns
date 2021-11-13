#include <iostream>
#include "PrototypeFactory.h"

void Client(PrototypeFactory &prototype_factory)
{
	std::cout << "Let's create a Prototype 1\n";
	auto ptrPrototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
	ptrPrototype->Method(90);
	std::cout << "\n";

	std::cout << "Let's create a Prototype 2 \n";
	ptrPrototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
	ptrPrototype->Method(10);
}
int main()
{
	auto ptrPrototypeFactory = std::make_shared<PrototypeFactory>();
	Client(*ptrPrototypeFactory);

	system("pause");
	return 0;
}