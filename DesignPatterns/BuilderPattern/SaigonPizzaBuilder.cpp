#include "SaigonPizzaBuilder.h"



SaigonPizzaBuilder::SaigonPizzaBuilder()
{
}


SaigonPizzaBuilder::~SaigonPizzaBuilder()
{
}

void SaigonPizzaBuilder::buildDough()
{
	m_pizza->setDough("pan baked");
}

void SaigonPizzaBuilder::buildSauce()
{
	m_pizza->setSauce("hot");
}

void SaigonPizzaBuilder::buildTopping()
{
	m_pizza->setTopping("pepperoni+salami");
}
