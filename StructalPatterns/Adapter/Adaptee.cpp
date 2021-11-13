#include "Adaptee.h"
#include <iostream>

LegacyRect::LegacyRect(double tlx, double tly, double brx, double bry)
{
	m_tlx = tlx;
	m_tly = tly;
	m_brx = brx;
	m_bry = bry;
}

LegacyRect::~LegacyRect()
{

}

void LegacyRect::DrawRect()
{
	std::cout << "size:" << m_tlx << " " << m_tly << " " << m_brx << " " << m_bry << std::endl;
}
