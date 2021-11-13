#include "Product.h"

Product1::~Product1()
{
}

std::string Product1::ListParts() const
{
	std::string str= "Product parts: ";
	for (size_t i = 0; i < m_parts.size(); i++) {
		if (m_parts[i] == m_parts.back()) {
			str += m_parts[i];
		}
		else {
			str += m_parts[i] + ", ";
		}
	}
	str += "\n\n";
	return str;
}
