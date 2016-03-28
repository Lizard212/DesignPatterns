#pragma once
#include"Command.h"
#include"Light.h"

class FlipDownCommand : public Command {
private:
	Light& the_light;
public:
	FlipDownCommand(Light& light) :the_light(light)
	{

	}

	virtual void Execute()
	{
		the_light.TurnOff();
	}
};