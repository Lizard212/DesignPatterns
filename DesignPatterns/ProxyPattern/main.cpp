#include"CheckProxy.h"

int main()
{
	IPayment* check_payment;
	check_payment = NULL;
	check_payment = new CheckProxy(123, "BIDV", "THANGPHAM");
	check_payment->PayFund(20000);
	delete check_payment;
	cout << endl;
	system("pause");
	return 0;
}