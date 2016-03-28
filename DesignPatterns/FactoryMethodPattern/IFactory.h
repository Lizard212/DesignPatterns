#pragma once
#include"IColor.h"

class IFactory
{
public:
	virtual IColor* Create(std::string type) = 0;
};