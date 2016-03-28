#include "PhoneFactory.h"
#include<iostream>
using namespace std;

int main()
{
	PhoneFactory *factory = PhoneFactory::CreateFactory(PhoneFactory::PHONE_FACTORIES::SAMSUMG);

	cout << "Dumbphone from Samsung: " << factory->GetDumb()->Name() << endl;
	delete factory->GetDumb();

	cout << "Smart phone from Samsung: " << factory->GetSmart()->Name() << endl;
	delete factory->GetSmart();
	delete factory;

	getchar();

	factory = PhoneFactory::CreateFactory(PhoneFactory::PHONE_FACTORIES::NOKIA);
	cout << "Dumb phone from nokia: " << factory->GetDumb()->Name() << endl;
	delete factory->GetDumb();
	cout << "Smart phone from NOKIA: " << factory->GetSmart()->Name() << endl;
	delete factory->GetSmart();
	delete factory;

	system("pause");
	return 0;

}