#ifndef IBuilder_h__
#define IBuilder_h__

/**
 * Builder接口指定用于创建Product对象的不同部分的方法。
 */
class Builder
{
public:
	virtual ~Builder() = default;
	virtual void ProducePartA() const = 0;
	virtual void ProducePartB() const = 0;
	virtual void ProducePartC() const = 0;
};
#endif // IBuilder_h__
