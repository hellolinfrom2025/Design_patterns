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
	//注册观察者
	void attach(Observer *pObj);
	//注销观察者
	void detach(Observer *pObj);
	//注销所有观察者
	void detachAll();
	//获得当前观察者数量
	int getObserverCount()const;

	virtual void sendSomeNews(std::string news)=0;

protected:
	void setChange(std::string news);

private:
	//通知改变
	void notify(void *pArg);

	bool m_bChanged;
	std::list<Observer*>m_objs;
};

#endif//DESIGN_PATTERNS_OBSERVER_OBSERVERABLE_H_
