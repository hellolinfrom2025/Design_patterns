#include <iostream>
#include "Director.h"
#include "IBuilderImpl.h"

void ClientCode(Director& director)
{
	auto ptrBuilder = std::make_shared<ConcreteBuilder1>();
	director.SetBuilder(ptrBuilder);
	std::cout << "Standard basic product:\n";
	director.BuildMinimalViableProduct();

	auto p = ptrBuilder->GetProduct();
	std::cout << p->ListParts().c_str();

	std::cout << "Standard full featured product:\n";
	director.BuildFullFeaturedProduct();

	p = ptrBuilder->GetProduct();
	std::cout << p->ListParts().c_str();
}

int main()
{
	auto director = std::make_unique<Director>();
	ClientCode(*director);

	system("pause");
	return 0;
}