#ifndef PrototypeFactory_h__
#define PrototypeFactory_h__
#include <unordered_map>
#include "Prototype .h"

//ԭ�����
enum class Type
{
	PROTOTYPE_1 = 0,
	PROTOTYPE_2
};
/**
 * ��PrototypeFactory�У�������������ԭ�ͣ�ÿ������ԭ�����Ӧһ����
 * ���ÿ��Ҫ������Ŀ����ʱ��������ʹ������ԭ�Ͳ���¡���ǡ�
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
