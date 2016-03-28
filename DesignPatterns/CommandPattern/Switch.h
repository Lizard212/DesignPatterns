#pragma once
#include"FlipUpCommand.h"
#include"FlipDownCommand.h"

class Switch
{
private:
	Command& flip_up;
	Command& flip_down;
public:
	Switch(Command& _flip_up, Command& _flip_down) :
		flip_up(_flip_up), flip_down(_flip_down) {

	}

	void FlipUp()
	{
		flip_up.Execute();
	}

	void FlipDown()
	{
		flip_down.Execute();
	}
};