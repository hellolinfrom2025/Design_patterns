#include "IBuilderImpl.h"

ConcreteBuilder1::ConcreteBuilder1()
{
	Reset();
}

ConcreteBuilder1::~ConcreteBuilder1()
{
}

void ConcreteBuilder1::Reset()
{
	m_ptrProduct.reset(new Product1);
}

void ConcreteBuilder1::ProducePartA() const
{
	m_ptrProduct->m_parts.push_back("PartA1");
}

void ConcreteBuilder1::ProducePartB() const
{
	m_ptrProduct->m_parts.push_back("PartB1");
}

void ConcreteBuilder1::ProducePartC() const
{
	m_ptrProduct->m_parts.push_back("PartC1");
}

std::shared_ptr<Product1> ConcreteBuilder1::GetProduct()
{
	auto result = m_ptrProduct;
	Reset();
	return result;
}
