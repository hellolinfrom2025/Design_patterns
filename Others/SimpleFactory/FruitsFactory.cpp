#include "FruitsFactory.h"
#include "IFruitsImpl.h"

//使用参数创建不同的产品
std::shared_ptr<IFruits> FruitsFactory::Create(const eFruitsCategory &category)
{
	if (category == eFruitsCategory::kApple) {
		return std::make_shared<Apple>();
	}
	else if (category == eFruitsCategory::kPear) {
		return std::make_shared<Pear>();
	}
	else {
		return nullptr;
	}
}

