#pragma once
#pragma once
#include"Animal.h"

class Cat :public Animal
{

public:
	Cat()
	{
		Animal();
		setSound("Meow");
	}
};