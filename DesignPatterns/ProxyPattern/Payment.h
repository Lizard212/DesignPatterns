#pragma once

#include"IPayment.h"

class Payment : public IPayment {

private:
	string bank_name;
	int account_number =0;
	string payment_date;
	string recepient_name;
public:

	void SetBankName(string _bank_name)
	{
		bank_name = _bank_name;
	}

	string GetBankName()
	{
		return bank_name;
	}

	void SetAccountNumber(int _account_number)
	{
		account_number = _account_number;
	}
	int GetAccountNumber()
	{
		return account_number;
	}

	void SetPaymentDate(string _payment_date)
	{
		payment_date = _payment_date;
	}
	string GetPaymentDate()
	{
		return payment_date;
	}


	void SetRecepientName(string _recepient_name)
	{
		_recepient_name = recepient_name;
	}
	string GetRecepientName()
	{
		return recepient_name;
	}

	void PayFund(float _amount)
	{
		cout << "Paid to Mr./Mrs./Miss. " + recepient_name + "Amount USD. " + to_string(_amount)
			+ "/- [From A/C: " + to_string(account_number) + ", Bank: " + bank_name + "] On date of " + payment_date;
	}
};