#include"RemoteTV.h"
#include"Fan.h"
#include"TV.h"



int main()
{



	IAppliance* itv;
	itv = new Fan("SONY");


	Switch *s1 = new RemoteTV(itv);

	s1->TurnOn();
	//s2->TurnOn();

	delete s1;
	delete itv;

	



	system("pause");
	return 0;
}