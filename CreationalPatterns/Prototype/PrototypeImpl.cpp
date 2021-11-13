#include "PrototypeImpl.h"

ConcretePrototype1::ConcretePrototype1(std::string prototype_name, const float concrete_prototype_field)
	: Prototype(prototype_name), m_concretePrototypeField1(concrete_prototype_field)
{}

std::shared_ptr<Prototype> ConcretePrototype1::Clone() const
{
	return std::make_shared<ConcretePrototype1>(*this);
}

ConcretePrototype2::ConcretePrototype2(std::string prototype_name, const float concrete_prototype_field)
	: Prototype(prototype_name), m_concretePrototypeField2(concrete_prototype_field)
{}

std::shared_ptr<Prototype> ConcretePrototype2::Clone() const
{
	return std::make_shared<ConcretePrototype2>(*this);
}
