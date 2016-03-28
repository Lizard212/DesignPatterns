#pragma once
#include"IColor.h"

class BlackCar:public IColor
{
public:
	std::string Color(void)
	{
		
		return "Black " + Menufacturer();
	}


	std::string Menufacturer()
	{
		return "Toyota";
	}

};