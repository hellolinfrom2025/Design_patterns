#pragma once
#ifndef DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVER_H_
#define DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVER_H_

#include "Observer.h"

class ConcreteObserver :
	public Observer
{
public:
	ConcreteObserver();
	virtual ~ConcreteObserver();
	virtual void update(void *pArg)override;
};
#endif//DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVER_H_

