#include "PhoneFactory.h"
#include "Factories.h"






PhoneFactory * PhoneFactory::CreateFactory(PHONE_FACTORIES factory)
{
	if (factory == PHONE_FACTORIES::SAMSUMG)
	{
		return new SamsungFactory();
	}
	else if (factory == PHONE_FACTORIES::LG)
	{
		return new LGFactory;
	}
	else if (factory == PHONE_FACTORIES::NOKIA)
	{
		return new NokiaFactory();
	}
}
