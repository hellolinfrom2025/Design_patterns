#ifndef IFruits_h__
#define IFruits_h__
#include <string>
//��Ʒ���ࣺˮ��
class IFruits
{
public:
	virtual ~IFruits()=default;
	virtual std::string ShowName() = 0;
};

#endif // IFruits_h__