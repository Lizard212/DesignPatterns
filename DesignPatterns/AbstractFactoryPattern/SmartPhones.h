#pragma once
#include"ISmart.h"

class GalaxyS7 : public ISmart
{
public:
	std::string Name()
	{
		return "GalaxyS7";
	}
};

class LG_G5 :public ISmart
{
public:
	std::string Name()
	{
		return "LG_G5";
	}
};

class Lumia : public ISmart
{
public:
	std::string Name()
	{
		return "Lumia";
	}
};