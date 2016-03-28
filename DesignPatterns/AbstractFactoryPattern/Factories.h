#pragma once
#include "PhoneFactory.h"
#include "SmartPhones.h"
#include"DumbPhones.h"

class SamsungFactory : public PhoneFactory
{
public:
	ISmart* GetSmart()
	{
		return new GalaxyS7();
	}

	IDumb* GetDumb()
	{
		return new Primo();
	}

};

class LGFactory : public PhoneFactory
{
public:
	ISmart* GetSmart()
	{
		return new LG_G5();
	}

	IDumb* GetDumb()
	{
		return new Genie();
	}
};

class NokiaFactory : public PhoneFactory
{
public:
	ISmart* GetSmart()
	{
		return new Lumia();
	}

	IDumb* GetDumb()
	{
		return new Asha();
	}
};
