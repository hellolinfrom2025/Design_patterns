#ifndef PImpl_h__
#define PImpl_h__
#include "Pimpl.h"

class widget::impl
{
public:
	// 第一个参数传接口类对象，可以回溯引用
	void draw(const widget& w) 
	{
		if (w.shown())
			std::cout << "drawing a const widget " << m_n << '\n';
	}
	impl() {};
	impl(const int n) : m_n(n) {};
	impl(const impl&r) = default;
	impl& operator=(const impl&r) = default;
private:
	// 私有数据
	int m_n{0};
};

widget::widget(const int n)
	:m_pImpl{std::make_unique<widget::impl>(n)}
{

}

widget::widget(const widget&w)
	: m_pImpl(new widget::impl(*(w.m_pImpl)))
{

}

widget::~widget()
{

}

widget& widget::operator=(const widget&w)
{
	if (&w==this){
		return *this;
	}
	*m_pImpl = *w.m_pImpl;
	return *this;
}

void widget::draw() 
{
	m_pImpl->draw(*this);
}

#endif // PImpl_h__
