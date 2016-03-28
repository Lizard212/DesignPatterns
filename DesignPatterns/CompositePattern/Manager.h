#pragma once
#include"Component.h"
#include<vector>
class Manager : public Component
{
private:

	vector < Component * > children;
public:
	Manager(std::string name, double salary) : Component(name, salary)
	{
	}
	void add(Component *cmp)
	{
		children.push_back(cmp);
	}
	void PrintSalary(int level)
	{
		for (int j = 0; j < level; ++j) cout << "\t";
		cout << "Manager : " << this->full_name.c_str() << ",salary: " << value_salary << "$\n";

		if (!children.empty())
		{
			for (int x = 0; x < level; ++x) cout << "\t";
			cout << "Subordinates  of " <<
				full_name.c_str() << ":\n";
			++level;
			for (int i = 0; i < children.size(); ++i)
				children[i]->PrintSalary(level);
		}
	}


};