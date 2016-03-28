#pragma once
#include"Animal.h"

class Dog :public Animal
{
public:
	void digHole()
	{
		cout << "Dub a hole" << endl;
	}
	Dog()
	{
		Animal();
		setSound("Go go");
	}
};