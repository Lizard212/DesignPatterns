#pragma once
#include"IAppliance.h"

class Switch
{
protected:
	IAppliance * iappliance;
	Switch(IAppliance * i)
	{
		i = iappliance;
	}
public:

	virtual void TurnOn() = 0;
	
	
};