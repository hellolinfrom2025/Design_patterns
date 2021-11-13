#ifndef IFruits_h__
#define IFruits_h__
#include <string>
//产品基类：水果
class IFruits
{
public:
	virtual ~IFruits()=default;
	virtual std::string ShowName() = 0;
};

#endif // IFruits_h__