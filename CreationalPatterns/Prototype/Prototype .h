#ifndef Prototype _h__
#define Prototype _h__
#include <string>
#include <iostream>
#include <memory>

//原型抽象类
class Prototype
{
protected:
	std::string m_prototypeName;
	float m_prototypeField{0.f};

public:
	Prototype() {}
	Prototype(std::string prototype_name)
		: m_prototypeName(prototype_name)
	{}
	virtual ~Prototype() = default;
	virtual std::shared_ptr<Prototype> Clone() const = 0;
	virtual void Method(const float prototype_field)
	{
		this->m_prototypeField = prototype_field;
		std::cout << "Call Method from " << m_prototypeName << " with field : " << prototype_field << std::endl;
	}
};
#endif // Prototype _h__
