#pragma once
#include"Switch.h"

int main()
{
	Light lamp;
	FlipUpCommand switch_up(lamp);
	FlipDownCommand switch_down(lamp);

	Switch s(switch_up, switch_down);
	s.FlipUp();
	s.FlipDown();

	system("pause");
	return 0;
}