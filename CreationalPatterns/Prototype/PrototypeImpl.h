#ifndef PrototypeImpl_h__
#define PrototypeImpl_h__
#include "Prototype .h"

/**
 * ConcretePrototype1��Prototype��һ�����ಢʵ�ֿ�¡������
 * ����������У�Prototype����������ݳ�Ա���ڶ�ջ�С�
 * �������ָ����������Ա���: String* m_name���㽫��Ҫʵ�ֿ������캯������ȷ������һ����ȸ��ƴӿ�¡����
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
