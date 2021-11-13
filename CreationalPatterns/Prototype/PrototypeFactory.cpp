#include "PrototypeFactory.h"
#include "PrototypeImpl.h"

PrototypeFactory::PrototypeFactory()
{
	m_prototypes[Type::PROTOTYPE_1] = std::make_unique<ConcretePrototype1>("PROTOTYPE_1 ", 50.f);
	m_prototypes[Type::PROTOTYPE_2] = std::make_unique<ConcretePrototype2>("PROTOTYPE_2 ", 60.f);
}

std::shared_ptr<Prototype> PrototypeFactory::CreatePrototype(const Type type)
{
	return m_prototypes[type]->Clone();
}
