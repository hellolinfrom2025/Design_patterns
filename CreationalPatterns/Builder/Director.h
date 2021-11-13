#ifndef Director_h__
#define Director_h__
#include "IBuilder.h"
#include <memory>

/**
 * ָ����ֻ�����ض�˳��ִ�н������衣�������ڸ����ض��Ķ���������������Ʒ��
 */
class Director
{
public:
	/**
	 * ָ������ͻ��˴��봫�ݸ������κι�����ʵ��һ������
	 * �������ͻ��˴���Ϳ��Ըı�����װ�Ĳ�Ʒ���������͡�
	 */
	void SetBuilder(std::shared_ptr<Builder> builder);
	/**
	 * ָ���߿���ʹ����ͬ�Ĺ������蹹�������Ʒ���塣
	 */
	void BuildMinimalViableProduct();
	void BuildFullFeaturedProduct();

private:
	std::shared_ptr<Builder> m_ptrBuilder;
};

#endif // Director_h__
