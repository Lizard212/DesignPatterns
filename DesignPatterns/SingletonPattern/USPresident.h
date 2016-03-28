#pragma once
#include<iostream>
#include<string>
using namespace std;

class USPresident
{
private:
	static USPresident instance;
	USPresident(){}
public:
	static USPresident getInstance()
	{
		return instance;
	}
	void Office()
	{
		cout << "I'm a the US president" << endl;
	}
};