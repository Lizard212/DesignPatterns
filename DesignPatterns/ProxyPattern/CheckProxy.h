#pragma once
#include"IPayment.h"
#include"Payment.h"
class CheckProxy : public IPayment {

private:
	Payment payment;
	bool is_signed;
public:
	CheckProxy(int _account_number, string _bank_name, string _recepient_name)
	{
		payment.SetAccountNumber(_account_number);
		payment.SetBankName(_bank_name);
		payment.SetPaymentDate("Date time now");

		is_signed = true;
	}

	void PayFund(float _amount)
	{
		if (is_signed)
		{
			payment.PayFund(_amount);
			cout << "Paid thru Chekc #123456 Successfully";
		}
	}
};