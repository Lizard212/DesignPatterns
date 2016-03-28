#pragma once
#include"Switch.h"
#include"TV.h"


class RemoteTV:public Switch
{
private:
	string name;
	IAppliance* itv = new TV(name);
public:
	
	RemoteTV(IAppliance* i) :Switch(iappliance)
	{
		itv = i;
	}

	void TurnOn()
	{
		itv->Run();
	}

};