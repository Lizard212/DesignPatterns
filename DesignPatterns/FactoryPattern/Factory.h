#pragma once
#include"ChocolateIceCreaem.h"
#include"StrawberryIceCream.h"
#include"VaniIceCream.h"

class Factory
{
public:
	IceCream* getIceCream(int id)
	{
		switch (id)
		{
		case 0:
			return new Chocalate();
		case 1:
			return new Strawberry();
		case 2:
			return new Vani();
		default:
			return nullptr;
			break;
		}
	}
};