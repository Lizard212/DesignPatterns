
#include"Cook.h"
#include"HanoiPizzaBuilder.h"
#include"SaigonPizzaBuilder.h"
int main()
{
	Cook cook;
	HanoiPizzaBuilder hanoiPizzaBuilder;
	SaigonPizzaBuilder saigonPizzaBuilder;

	cook.makePizza(&hanoiPizzaBuilder);
	cook.openPizza();

	cook.makePizza(&saigonPizzaBuilder);
	cook.openPizza();
	system("pause");
	return 0;

}