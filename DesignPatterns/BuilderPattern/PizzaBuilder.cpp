#include "PizzaBuilder.h"



PizzaBuilder::PizzaBuilder()
{
}

PizzaBuilder::~PizzaBuilder()
{
}

Pizza * PizzaBuilder::getPizza()
{
	return m_pizza.get();
}

void PizzaBuilder::createNewPizzaProduct()
{
	m_pizza = make_unique<Pizza>();
}




