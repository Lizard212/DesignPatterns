#pragma once
#include<string>
#include<iostream> 

using namespace std;

class IAppliance
{

public:
	virtual void Run() =0;
};