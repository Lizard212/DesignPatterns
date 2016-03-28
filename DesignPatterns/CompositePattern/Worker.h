#pragma once
#include"Component.h"

class Worker : public Component
{
public:
	Worker(string name, double salary) : Component(name, salary)
	{
	}
	void PrintSalary(int level)
	{
		for (int j = 0; j < level; ++j) cout << "\t";
		cout << "Worker : " <<
			full_name << ",salary: " <<
			value_salary << "$\n";
	}
};