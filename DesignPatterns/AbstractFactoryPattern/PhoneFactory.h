#pragma once
#include"ISmart.h"
#include"IDumb.h"

class PhoneFactory
{
public:
	enum PHONE_FACTORIES
	{
		SAMSUMG,
		LG,
		NOKIA
	};
	virtual ISmart* GetSmart() = 0;
	virtual IDumb* GetDumb() = 0;
	static PhoneFactory* CreateFactory(PHONE_FACTORIES factory);
};

