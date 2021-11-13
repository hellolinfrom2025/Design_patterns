#ifndef IProduct_h__
#define IProduct_h__
#include <string>

//产品基类
class IProduct
{
public:
	virtual ~IProduct() = default;
	virtual std::string Operation() const = 0;
};
#endif // IProduct_h__
