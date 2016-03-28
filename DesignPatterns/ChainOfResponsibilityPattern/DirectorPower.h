#pragma once
#include"PurchasePower.h"
#include"PurchaseRequest.h"
#include<iostream>
using namespace std;

class DirectorPower : public PurchasePower {
private:
	double ALLOWABLE = 100 * BASE;
public:
	void ProcessRequest(PurchaseRequest* request)
	{
		if (request->getAmount() < ALLOWABLE)
		{
			cout << "Director will approve $" << request->getAmount() << endl;

		}
		else if (successor != nullptr)
		{
			successor->ProcessRequest(request);
		}
	}
};