#pragma once
#include"PurchasePower.h"
#include"PurchaseRequest.h"
#include<iostream>
using namespace std;

class PresidentPower : public PurchasePower {
private:
	double ALLOWABLE = 10000 * BASE;
public:
	void ProcessRequest(PurchaseRequest* request)
	{
		if (request->getAmount() < ALLOWABLE)
		{
			cout << "President will approve $" << request->getAmount();

		}
		else 
		{
			cout << "Your request for $" << request->getAmount() << " needs a board meeting!" << endl;
		}
	}
};