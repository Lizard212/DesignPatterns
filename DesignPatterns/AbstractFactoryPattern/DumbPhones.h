#pragma once
#include"IDumb.h"

class Asha :public IDumb {
public:
	std::string Name()
	{
		return "Asha";
	}
};

class Primo : public IDumb
{
public:
	std::string Name()
	{
		return "Primo";
	}
};

class Genie : public IDumb
{
public:
	std::string Name()
	{
		return "Genie";
	}
};