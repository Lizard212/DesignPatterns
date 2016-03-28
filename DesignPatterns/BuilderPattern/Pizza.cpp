#include "Pizza.h"



void Pizza::setDough(const string & dough)
{
	m_dough = dough;
}

void Pizza::setSauce(const string & sauce)
{
	m_sauce = sauce;
}

void Pizza::setTopping(const string & topping)
{
	m_topping = topping;
}

void Pizza::open() const
{
	cout << "Pizza with " << m_dough << " dough, " << m_sauce << " sauce and "
		<< m_topping << " topping. Mmm." << endl;
}





