#include "HanoiPizzaBuilder.h"



HanoiPizzaBuilder::HanoiPizzaBuilder()
{
}


HanoiPizzaBuilder::~HanoiPizzaBuilder()
{
}

void HanoiPizzaBuilder::buildDough()
{
	m_pizza->setDough("cross");

}

void HanoiPizzaBuilder::buildSauce()
{
	m_pizza->setSauce("mild");
}

void HanoiPizzaBuilder::buildTopping()
{
	m_pizza->setTopping("ham+pineapple");
}
