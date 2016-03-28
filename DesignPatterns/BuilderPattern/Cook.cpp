#include "Cook.h"



void Cook::openPizza()
{
	m_pizzaBuilder->getPizza()->open();
}

void Cook::makePizza(PizzaBuilder * pb)
{
	m_pizzaBuilder = pb;
	m_pizzaBuilder->createNewPizzaProduct();
	m_pizzaBuilder->buildDough();
	m_pizzaBuilder->buildSauce();
	m_pizzaBuilder->buildTopping();
}

Cook::Cook()
{
}


Cook::~Cook()
{
}
