#ifndef FruitsFactory_h__
#define FruitsFactory_h__
#include <memory>
#include "IFruits.h"

enum class eFruitsCategory
{
	kApple = 0,
	kPear
};
//�򵥹�����������Ʒ
class FruitsFactory
{
public:
	//ʹ�ò���������ͬ�Ĳ�Ʒ
	static std::shared_ptr<IFruits> Create(const eFruitsCategory &category);
};
#endif // FruitsFactory_h__
