#pragma once
#include<iostream>
#include<string>

using namespace std;

class IPayment {
public:
	virtual void PayFund(float amount) = 0;
};