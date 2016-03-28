#pragma once
#include "PizzaBuilder.h"
class SaigonPizzaBuilder :public PizzaBuilder
{
public:
	
	SaigonPizzaBuilder();
	virtual ~SaigonPizzaBuilder();
	virtual void buildDough();
	virtual void buildSauce();
	virtual void buildTopping();
};

