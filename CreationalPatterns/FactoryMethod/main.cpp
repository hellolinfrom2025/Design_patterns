#include <iostream>
#include "AbstractFactoryImpl.h"
#define H_SPTR_VALID(ptr) (ptr&&ptr.get())

void ClientCode(const AbstractFactory& creator)
{
	// ...
	std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
		<< creator.SomeOperation() << std::endl;
	// ...
}
int main()
{
	std::shared_ptr<AbstractFactory>ptr1= std::make_shared<ConcreteFactory1>();
	if (H_SPTR_VALID(ptr1)){
		auto ptrProduct1= ptr1->FactoryMethod();
		if (H_SPTR_VALID(ptrProduct1)) {
			std::cout << ptrProduct1->Operation() << std::endl;
		}
	}
	std::shared_ptr<AbstractFactory>ptr2 = std::make_shared<ConcreteFactory2>();
	if (H_SPTR_VALID(ptr2)) {
		ClientCode(*ptr2);
	}
	system("pause");
	return 0;
}