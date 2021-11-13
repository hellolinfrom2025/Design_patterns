#pragma once
#ifndef DESIGN_PATTERNS_OBSERVER_OBSERVER_H_
#define DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

class Observer
{
public:
	Observer();
	virtual~Observer();
	//当被观察者发生改变时，通知观察者更新
	virtual void update(void *pArg) = 0;

};
#endif //DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

