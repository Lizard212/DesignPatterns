#pragma once

#include"Pizza.h"

// Abstract Builder


class PizzaBuilder
{
public:
	PizzaBuilder();
	virtual ~PizzaBuilder();
	
	Pizza* getPizza();
	void createNewPizzaProduct();

	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildTopping() = 0;
protected:
	unique_ptr<Pizza> m_pizza;
};

