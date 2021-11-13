#include "Director.h"

void Director::SetBuilder(std::shared_ptr<Builder> builder)
{
	m_ptrBuilder = builder;
}

void Director::BuildMinimalViableProduct()
{
	m_ptrBuilder->ProducePartA();
}

void Director::BuildFullFeaturedProduct()
{
	m_ptrBuilder->ProducePartA();
	m_ptrBuilder->ProducePartB();
	m_ptrBuilder->ProducePartC();
}
