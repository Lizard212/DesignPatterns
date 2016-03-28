#pragma once
#include"IIceCream.h"

class Strawberry : public IceCream
{
public:
	std::string Funtionality()
	{
		return "Strawberry Ice cream";
	}
};