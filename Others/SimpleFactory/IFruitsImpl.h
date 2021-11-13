#ifndef FruitsImpl_h__
#define FruitsImpl_h__
#include "IFruits.h"

//具体产品类：苹果
class Apple :public IFruits
{
public:
	virtual ~Apple() override;
	virtual std::string ShowName() override;
};

//具体产品类：梨
class Pear :public IFruits
{
public:
	virtual ~Pear()override;
	virtual std::string ShowName()override;
};

#endif // FruitsImpl_h__
