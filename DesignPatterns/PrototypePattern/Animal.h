#pragma once
#include<iostream>
#include<string>
using namespace std;

class Animal
{
private:
	string name;
	int weight;
	string sound;

public:
	void setName(string new_name)
	{
		name = new_name;
	}

	string getName()
	{
		return name;
	}
	void setWeight(int new_weight)
	{
		if (new_weight > 0)
		{
			weight = new_weight;

		}
		else
		{
			cout << "Weight must be bigger than 0 " << endl;
		}
	}
	int getWeight()
	{
		return weight;
	}
	void setSound(string new_sound)
	{
		sound = new_sound;
	}

	string getSound()
	{
		return sound;
	}
};