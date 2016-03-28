#pragma once
#include"Switch.h"
#include"Fan.h"


class RemoteFan :public Switch
{
private:
	string name;
	IAppliance* ifan = new Fan(name);
public:

	RemoteFan(IAppliance* i) :Switch(iappliance)
	{
		ifan = i;
	}

	void TurnOn()
	{
		ifan->Run();
	}

};