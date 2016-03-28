#pragma once
#include<string>
class Book
{
private:
	std::string name;
	bool state;
public:
	void setName(std::string _name)
	{
		name = _name;
	}

	std::string getName()
	{
		return name;
	}

	void setState(bool _state)
	{
		state = _state;
	}

	bool getState()
	{
		return state;
	}



};