#pragma once

#include<string>

class PurchaseRequest {
private:
	double amount;
	std::string purpose;

public:
	PurchaseRequest(double _amount, std::string _purpose)
	{
		amount = _amount;
		purpose = _purpose;
	}

	double getAmount()
	{
		return amount;
	}
	void setAmount(double _amount)
	{
		amount = _amount;
	}
	std::string getPurpose()
	{
		return purpose;
	}

	void setPurpose(std::string _purpose)
	{
		purpose = _purpose;
	}
};