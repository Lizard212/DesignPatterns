#pragma once
#include"PurchasePower.h"
#include"PurchaseRequest.h"
#include<iostream>
using namespace std;

class VicePresidentPower : public PurchasePower {
private:
	double ALLOWABLE = 1000 * BASE;
public:
	void ProcessRequest(PurchaseRequest* request)
	{
		if (request->getAmount() < ALLOWABLE)
		{
			cout << "Vicepresident will approve $" << request->getAmount() << endl;

		}
		else if (successor != nullptr)
		{
			successor->ProcessRequest(request);
		}
	}
};