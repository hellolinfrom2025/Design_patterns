#ifndef PrototypeImpl_h__
#define PrototypeImpl_h__
#include "Prototype .h"

/**
 * ConcretePrototype1是Prototype的一个子类并实现克隆方法。
 * 在这个例子中，Prototype类的所有数据成员都在堆栈中。
 * 如果你有指针在你的属性比如: String* m_name，你将需要实现拷贝构造函数，以确保你有一个深度复制从克隆方法
 */
class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1(std::string prototype_name, const float concrete_prototype_field);
	std::shared_ptr<Prototype> Clone() const override;
private:
	float m_concretePrototypeField1{ 0.f };
};

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2(std::string prototype_name, const float concrete_prototype_field);
	std::shared_ptr<Prototype> Clone() const override;
private:
	float m_concretePrototypeField2{0.f};
};
#endif // PrototypeImpl_h__
