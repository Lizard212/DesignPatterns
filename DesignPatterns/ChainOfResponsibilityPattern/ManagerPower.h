#pragma once
#include"PurchasePower.h"
#include"PurchaseRequest.h"
#include<iostream>
using namespace std;

class ManagerPower : public PurchasePower {
private:
	double ALLOWABLE = 10 * BASE;
public:
	void ProcessRequest(PurchaseRequest* request)
	{
		if (request->getAmount() < ALLOWABLE)
		{
			cout << "Manager will approve $"  << request->getAmount() << endl;

		}
		else if (successor != nullptr)
		{
			successor->ProcessRequest(request);
		}
	}
};