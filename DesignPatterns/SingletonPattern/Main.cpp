#include"USPresident.h"

int main()
{
	USPresident object = USPresident::getInstance();

	object.Office();
	system("pause");
	return 0;
}