#pragma once
#include"Command.h"
#include"Light.h"

class FlipUpCommand : public Command {
private:
	Light& the_light;
public:
	FlipUpCommand(Light& light) :the_light(light)
	{

	}

	virtual void Execute()
	{
		the_light.TurnOn();
	}
};