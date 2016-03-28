#pragma once
#include<iostream>
#include<float.h>
#include<string>
using namespace std;

class BronzeSate;
class SilverSate;
class GoldSate;
class Account;

class State {
protected:
	double balance;
	string state_name;
	Account *account;
	double lower_limit;
	double upper_limit;
public:
	void setBlance(double _balance)
	{
		balance = _balance;
	}

	double getBlance()
	{
		return balance;
	}
	void setStateName(string _state_name)
	{
		state_name = _state_name;
	}

	string getStateName()
	{
		return state_name;
	}

	virtual void ensureState() = 0;
};
class Account
{


public:
	string customer_name;
	State *account_state;
public:
	Account(string customer_name)
	{
		customer_name = customer_name;
		account_state = new BronzeState(1000.0, this);
		cout << customer_name + " Opend Account with Depsosit RS. " << account_state;
	}

	void deposit(double amount)
	{
		account_state->setBlance(account_state->getBlance() + amount);
		account_state->ensureState();
		cout << customer_name + " deposited RS. " << amount << "/-\n";
		cout << "Total account balance : RS. " << account_state->getBlance()
			<< account_state->getStateName() + "\n";
	}

	void payIntrest(double percentage)
	{
		account_state->setBlance(((account_state->getBlance())*percentage) * 100.0);
		account_state->ensureState();
		cout << "Bank paid intrest of  " << percentage << " % \n";
		cout << "Total account balance : RS. " << account_state->getBlance()
			<< account_state->getStateName() + "\n";
	}
};

class BronzeState : public State {
public:
	BronzeState() {}
	BronzeState(double balance, Account *_account)
	{
		this->state_name = "BRONZE";
		this->balance = balance;
		this->lower_limit = 1000.0;
		this->upper_limit = 50000.0;
	    account = _account;
	}

	void ensureState()
	{
		if (balance > upper_limit)
		{
			account->account_state = new SilverState(balance, account);
		}
	}
};

class SilverState : public State {
public:
	SilverState() {}
	SilverState(double balance, Account *_account)
	{
		this->state_name = "BRONZE";
		this->balance = balance;
		this->lower_limit = 50001.0;
		this->upper_limit = 100000.0;
		account = _account;
	}

	void ensureState()
	{
		if (balance > upper_limit)
		{
			account->account_state = new  GoldState(balance, account);
		}
		else if (balance <= lower_limit)
		{
			account->account_state = new BronzeState(balance, account);
		}
	}
};
class GoldState : public State {
public:
	GoldState() {}
	GoldState(double balance, Account *_account)
	{
		this->state_name = "BRONZE";
		this->balance = balance;
		this->lower_limit = 1000001.0;
		this->upper_limit = DBL_MAX;
		account = _account;
	}

	void ensureState()
	{
		if (balance <= upper_limit)
		{
			account->account_state = new SilverState(balance, account);
		}
	}
};


static void StatePattern()
{
	Account x =  Account("xxx");
	x.deposit(60000.0);
	x.deposit(2000000.0);

	x.payIntrest(10.0);
}