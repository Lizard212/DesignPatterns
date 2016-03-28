#pragma once
#include<string>
#include"PurchaseRequest.h"
class PurchasePower {
protected:
	static double BASE;
	PurchasePower* successor;
public:
	void SetSuccessor(PurchasePower* _successor)
	{
		successor = _successor;
	}
	virtual void ProcessRequest(PurchaseRequest* request) =0;
};

double PurchasePower::BASE = 1;