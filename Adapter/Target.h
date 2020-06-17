#pragma once

//目标类，纯虚类（接口）
class Rect
{
public:
	Rect();
	virtual ~Rect();
	virtual void Draw()=0;
};

