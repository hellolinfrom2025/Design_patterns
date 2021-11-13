#include "FruitsFactory.h"
#include "IFruitsImpl.h"

//ʹ�ò���������ͬ�Ĳ�Ʒ
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

