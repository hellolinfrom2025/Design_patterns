#ifndef Product_h__
#define Product_h__
#include <vector>
#include <string>
/**
 * 只有当您的产品非常复杂并且需要大量配置时，才有必要使用Builder模式。
 * 不同于其他创造模式，不同的具体建造者可以生产出不相关的产品。
 * 换句话说，不同构建器的结果可能并不总是遵循相同的接口。
 */
class Product1
{
public:
	~Product1();
	std::string ListParts()const;
	std::vector<std::string> m_parts;
};
#endif // Product_h__
