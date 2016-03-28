#pragma once
#include"IAdapter.h"
#include"LibraryTwo.h"

class AdapterTwo : public IAdapter
{
public:
	void Do()
	{
		LibraryTwo library_two;
		std::cout << library_two.DoTwo();
	}


};
