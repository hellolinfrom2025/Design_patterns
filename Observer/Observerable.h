#pragma once
#ifndef DESIGN_PATTERNS_OBSERVER_OBSERVERABLE_H_
#define DESIGN_PATTERNS_OBSERVER_OBSERVERABLE_H_

#include <list>

class Observer;
class Observerable
{
public:
	Observerable();
	virtual ~Observerable();
	//ע��۲���
	void attach(Observer *pObj);
	//ע���۲���
	void detach(Observer *pObj);
	//ע�����й۲���
	void detachAll();
	//��õ�ǰ�۲�������
	int getObserverCount()const;

	virtual void sendSomeNews(std::string news)=0;

protected:
	void setChange(std::string news);

private:
	//֪ͨ�ı�
	void notify(void *pArg);

	bool m_bChanged;
	std::list<Observer*>m_objs;
};

#endif//DESIGN_PATTERNS_OBSERVER_OBSERVERABLE_H_
