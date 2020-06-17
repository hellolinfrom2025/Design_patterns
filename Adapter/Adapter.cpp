#include "Adapter.h"
#include <iostream>

AdapterRect::AdapterRect(double x, double y, double w, double h)
	:LegacyRect(x,y,x+w,y+h)
{
	std::cout<<"Adapter::Adapter(double x, double y, double w, double h)" << std::endl;
}

AdapterRect::~AdapterRect()
{

}

void AdapterRect::Draw()
{
	std::cout <<"Adapter::Draw()" << std::endl;
	DrawRect();
}

/////////////////////
Adapter2Rect::Adapter2Rect(double x, double y, double w, double h)
	:m_legacyRect(x,y,x+w,y+h)
{
	std::cout << "Adapter2::Adapter2(double x, double y, double w, double h)" << std::endl;
}

Adapter2Rect::~Adapter2Rect()
{

}

void Adapter2Rect::Draw()
{
	std::cout << " Adapter2::Draw()" << std::endl;
	m_legacyRect.DrawRect();

}
