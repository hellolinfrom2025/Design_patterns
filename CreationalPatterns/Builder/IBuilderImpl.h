#ifndef IBuilderImpl_h__
#define IBuilderImpl_h__
#include <memory>
#include "IBuilder.h"
#include "Product.h"

/**
 * ��ѭBuilder�ӿڣ����ṩ��������ľ���ʵ�֡�
 * ���ĳ�������м��ֲ�ͬ�Ĺ��������壬ʵ�ַ�ʽ��ͬ��
 */
class ConcreteBuilder1 : public Builder
{
	/**
	 * һ���µĹ�����ʵ��Ӧ�ð���һ���հ׵Ĳ�Ʒ���󣬸ò�Ʒ�������Ժ����װ��ʹ�á�
	 */
public:
	ConcreteBuilder1();
	~ConcreteBuilder1();

	void Reset();
	//��Ʒ�Ĺ�������
	void ProducePartA()const override;
	void ProducePartB()const override;
	void ProducePartC()const override;
	/**
	 * ����������Ӧ���ṩ�����Լ��ķ��������������
	 * ������Ϊ��ͬ���͵Ĺ��������ܻᴴ����ȫ��ͬ�Ĳ�Ʒ������Щ��Ʒ������ѭ��ͬ�Ľӿڡ�
	 *
	 * ͨ�����ڽ����ս�����ظ��ͻ���֮�󣬹�����ʵ����׼���ÿ�ʼ������һ����Ʒ��
	 * �����Ϊʲôͨ���ڡ�getProduct���������ĩβ����reset������
	 * Ȼ����������Ϊ����ǿ���Եģ��������ù������ȴ����Կͻ��˴������ʽ���õ��ã�Ȼ���ٴ���֮ǰ�Ľ����
	 */
	std::shared_ptr<Product1> GetProduct();

private:
	std::shared_ptr<Product1>m_ptrProduct;
};

#endif // IBuilderImpl_h__
