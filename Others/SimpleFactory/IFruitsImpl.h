#ifndef FruitsImpl_h__
#define FruitsImpl_h__
#include "IFruits.h"

//�����Ʒ�ࣺƻ��
class Apple :public IFruits
{
public:
	virtual ~Apple() override;
	virtual std::string ShowName() override;
};

//�����Ʒ�ࣺ��
class Pear :public IFruits
{
public:
	virtual ~Pear()override;
	virtual std::string ShowName()override;
};

#endif // FruitsImpl_h__
