#pragma once
#include "Adaptee.h"
#include "Target.h"
//适配器 1.使用多重继承（只有一个基类是实现类，其他都是接口类）
class AdapterRect:public Rect,public LegacyRect
{
public:
	AdapterRect(double x, double y, double w,double h);
	virtual ~AdapterRect();
	virtual void Draw();
};

//适配器 2.使用组合方式（对象）
class Adapter2Rect :public Rect
{
public:
	Adapter2Rect(double x, double y, double w, double h);
	virtual ~Adapter2Rect();
	virtual void Draw();
private:
	LegacyRect m_legacyRect;
};
