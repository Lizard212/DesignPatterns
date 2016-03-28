#pragma once
#include "PizzaBuilder.h"
class HanoiPizzaBuilder : public PizzaBuilder
{
public:
	virtual ~HanoiPizzaBuilder();
	virtual void buildDough();
	virtual void buildSauce();
	virtual void buildTopping();
	HanoiPizzaBuilder();
	
};

