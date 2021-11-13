#ifndef IBuilder_h__
#define IBuilder_h__

/**
 * Builder�ӿ�ָ�����ڴ���Product����Ĳ�ͬ���ֵķ�����
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
