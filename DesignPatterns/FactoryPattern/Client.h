#pragma once
#include"Factory.h"

int main()
{
	IceCream* ice;
	Factory factory;

	ice = factory.getIceCream(0);
	ice->Funtionality();
	delete ice;

	ice = factory.getIceCream(1);
	ice->Funtionality();
	delete ice;

	ice = factory.getIceCream(2);
	ice->Funtionality();
	delete ice;

	system("pause");
	return 0;
}