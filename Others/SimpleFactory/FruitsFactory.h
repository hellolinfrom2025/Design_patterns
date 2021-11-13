#ifndef FruitsFactory_h__
#define FruitsFactory_h__
#include <memory>
#include "IFruits.h"

enum class eFruitsCategory
{
	kApple = 0,
	kPear
};
//简单工厂：创建产品
class FruitsFactory
{
public:
	//使用参数创建不同的产品
	static std::shared_ptr<IFruits> Create(const eFruitsCategory &category);
};
#endif // FruitsFactory_h__
