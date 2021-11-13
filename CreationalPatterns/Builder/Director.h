#ifndef Director_h__
#define Director_h__
#include "IBuilder.h"
#include <memory>

/**
 * 指挥者只负责按特定顺序执行建筑步骤。它有助于根据特定的订单或配置生产产品。
 */
class Director
{
public:
	/**
	 * 指挥者与客户端代码传递给它的任何构建器实例一起工作。
	 * 这样，客户端代码就可以改变新组装的产品的最终类型。
	 */
	void SetBuilder(std::shared_ptr<Builder> builder);
	/**
	 * 指挥者可以使用相同的构建步骤构建多个产品变体。
	 */
	void BuildMinimalViableProduct();
	void BuildFullFeaturedProduct();

private:
	std::shared_ptr<Builder> m_ptrBuilder;
};

#endif // Director_h__
