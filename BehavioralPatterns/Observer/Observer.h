#pragma once
#ifndef DESIGN_PATTERNS_OBSERVER_OBSERVER_H_
#define DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

class Observer
{
public:
	Observer();
	virtual~Observer();
	//�����۲��߷����ı�ʱ��֪ͨ�۲��߸���
	virtual void update(void *pArg) = 0;

};
#endif //DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

