#ifndef AbstractProduct_h__
#define AbstractProduct_h__
#include <string>

//�����ƷA�ӿ�
class IProductA
{
public:
	virtual ~IProductA() =default;
	virtual std::string UsefulFunctionA() const = 0;
};

class IProductB
{
public:
	virtual ~IProductB() =default;
	virtual std::string UsefulFunctionB() const = 0;
	/**
	 * ���󹤳�ȷ�������������в�Ʒ������ͬϵ�У�����Ǽ��ݵġ�
	 */
	virtual std::string AnotherUsefulFunctionB(const IProductA&collaborator) const = 0;
};

#endif // AbstractProduct_h__
