#pragma once
#include"PizzaBuilder.h"
class Cook
{
public:
	void openPizza();
	void makePizza(PizzaBuilder* pb);

	Cook();
	~Cook();
private:
	PizzaBuilder* m_pizzaBuilder;
};

