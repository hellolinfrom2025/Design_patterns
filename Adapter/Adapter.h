#pragma once
#include "Adaptee.h"
#include "Target.h"
//������ 1.ʹ�ö��ؼ̳У�ֻ��һ��������ʵ���࣬�������ǽӿ��ࣩ
class AdapterRect:public Rect,public LegacyRect
{
public:
	AdapterRect(double x, double y, double w,double h);
	virtual ~AdapterRect();
	virtual void Draw();
};

//������ 2.ʹ����Ϸ�ʽ������
class Adapter2Rect :public Rect
{
public:
	Adapter2Rect(double x, double y, double w, double h);
	virtual ~Adapter2Rect();
	virtual void Draw();
private:
	LegacyRect m_legacyRect;
};
