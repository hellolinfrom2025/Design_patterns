#include "Observerable.h"

#include "Observer.h"

Observerable::Observerable()
{
	m_bChanged = false;
}

Observerable::~Observerable()
{

}

void Observerable::attach(Observer *pObj)
{
	if (nullptr == pObj)
		return;
	//观察者是否已存在
	std::list<Observer*>::const_iterator cit = m_objs.cbegin();
	for(;cit!=m_objs.cend();++cit)
	{
		if (*cit == pObj)
			return;
	}
	m_objs.push_back(pObj);
}

void Observerable::detach(Observer *pObj)
{
	if ((nullptr == pObj) || (m_objs.empty()))
		return;

	m_objs.remove(pObj);
}

void Observerable::detachAll()
{
	m_objs.clear();
}

int Observerable::getObserverCount() const
{
	return m_objs.size();
}

void Observerable::setChange(std::string news)
{
	m_bChanged = true;
	notify((void*)news.c_str());
}

void Observerable::notify(void *pArg)
{
	if (!m_bChanged)
		return;

	std::list<Observer*>::const_iterator cit = m_objs.cbegin();
	for (;cit!=m_objs.cend();++cit)
	{
		(*cit)->update(pArg);
	}
	m_bChanged = false;
}
