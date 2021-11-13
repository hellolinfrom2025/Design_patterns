#ifndef PrototypeFactory_h__
#define PrototypeFactory_h__
#include <unordered_map>
#include "Prototype .h"

//原型类别
enum class Type
{
	PROTOTYPE_1 = 0,
	PROTOTYPE_2
};
/**
 * 在PrototypeFactory中，您有两个具体原型，每个具体原型类对应一个，
 * 因此每次要创建项目符号时，都可以使用现有原型并克隆它们。
 */
class PrototypeFactory
{
public:
	PrototypeFactory();
	~PrototypeFactory()=default;
	std::shared_ptr<Prototype> CreatePrototype(const Type type);

private:
	std::unordered_map<Type,std::unique_ptr<Prototype>> m_prototypes;
};
#endif // PrototypeFactory_h__
