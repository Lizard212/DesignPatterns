#pragma once
#include"IAppliance.h"

class Fan: public IAppliance 
{
private:
	string name;
public:
	Fan(string _name)
	{
		name = _name;
	}

	void Run()
	{
		cout << name + " is running";
	}
};