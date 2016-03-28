#pragma once
#include<iostream>
#include<string>
#include<memory>

using namespace std;

// Product
class Pizza
{
public:
	
	void setDough(const string& dough);
	void setSauce(const string & sauce);
	void setTopping(const string& topping);
	void open() const;

private:
	string m_dough;
	string m_sauce;
	string m_topping;
};

