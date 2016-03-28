#pragma once
#include"IColor.h"

class RedRose : public IColor
{
public:
	std::string Color(void)
	{
		return "Red";
	}


};