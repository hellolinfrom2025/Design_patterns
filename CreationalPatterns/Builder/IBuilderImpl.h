#ifndef IBuilderImpl_h__
#define IBuilderImpl_h__
#include <memory>
#include "IBuilder.h"
#include "Product.h"

/**
 * 遵循Builder接口，并提供构建步骤的具体实现。
 * 您的程序可能有几种不同的构建器变体，实现方式不同。
 */
class ConcreteBuilder1 : public Builder
{
	/**
	 * 一个新的构建器实例应该包含一个空白的产品对象，该产品对象将在以后的组装中使用。
	 */
public:
	ConcreteBuilder1();
	~ConcreteBuilder1();

	void Reset();
	//产品的构建步骤
	void ProducePartA()const override;
	void ProducePartB()const override;
	void ProducePartC()const override;
	/**
	 * 具体生成器应该提供它们自己的方法来检索结果。
	 * 这是因为不同类型的构建器可能会创建完全不同的产品，而这些产品并不遵循相同的接口。
	 *
	 * 通常，在将最终结果返回给客户端之后，构建器实例将准备好开始生产另一个产品。
	 * 这就是为什么通常在“getProduct”方法体的末尾调用reset方法。
	 * 然而，这种行为不是强制性的，您可以让构建器等待来自客户端代码的显式重置调用，然后再处理之前的结果。
	 */
	std::shared_ptr<Product1> GetProduct();

private:
	std::shared_ptr<Product1>m_ptrProduct;
};

#endif // IBuilderImpl_h__
