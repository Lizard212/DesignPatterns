#pragma once
#include"IAppliance.h"

class TV : public IAppliance
{
private:
	string name;
public:
	TV(string _name)
	{
		name = _name;
	}

	void Run()
	{
		cout << name + " is running";
	}

};