#pragma once
#ifndef DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVERABLE_H_
#define DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVERABLE_H_
#include "Observerable.h"

class ConcreteObserverable :
	public Observerable
{
public:
	ConcreteObserverable();
	virtual ~ConcreteObserverable();

	virtual void sendSomeNews(std::string news) override;

};
#endif//DESIGN_PATTERNS_OBSERVER_CONCRETE_OBSERVERABLE_H_

