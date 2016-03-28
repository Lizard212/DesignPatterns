#pragma once
#include<string>
#include<iostream>
using namespace std;

class Component
{
protected:
	string full_name;
	double value_salary;
public:
	Component(string name, double salary)
	{
		name = full_name;
		salary = value_salary;
	}

	virtual void PrintSalary(int level) = 0;

};