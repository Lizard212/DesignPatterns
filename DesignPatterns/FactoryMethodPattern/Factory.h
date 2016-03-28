#pragma once
#include "IFactory.h"
#include"RedRose.h"
#include"YellowRose.h"
#include"BlackCar.h"

class Factory :public IFactory
{
public:
	IColor* Create(std::string type)
	{
		if ("Red" == type)
		{
			return new RedRose();
		}
		else if ("Yellow" == type)
		{
			return new YellowRose();
		}
		else if ("Black" == type)
		{
			return new BlackCar();
		}

		return NULL;

		
	}
};

