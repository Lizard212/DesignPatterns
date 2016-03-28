#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

class Observer
{
public:
	virtual void Update(string sms) = 0;
};

class Customer : public Observer
{
private:
	string name;
public:
	Customer(string name)
	{
		this->name = name;
	}
	void Update(string sms)
	{
		cout << "Hello " << " " + name + " nhan dip " + sms + " " + "Vina phone khuyen mai 100 % gia tri the nap" << endl;
	}
	
};

class Subject 
{

public:
   virtual	void Notify() = 0;
   virtual   void Register(Customer observer) = 0;
   virtual void Refuse(Customer observer) = 0;
};

class Event : public Subject
{
private:
	string _event;
	list<Customer> customers;
public:
	Event(string _event)
	{
		this->_event = _event;
	}
	void Notify()
	{
		for (list<Customer>::iterator i = customers.begin(); i != customers.end(); ++i)
		{
			(i)->Update(_event);
		}

	}

	void Register(Customer customer)
	{
		customers.push_back(customer);
	}

	void Refuse(Customer customer)
	{
	 //
	}
};

static void ObserverPattern()
{
	Customer customer1("thang");
	Customer customer2("tung");

	Subject *event1 = new Event("QUOC KHANH");
	Subject *event2 = new Event("QUOC TE LAO DONG");

	event1->Register(customer1);
	event2->Register(customer2);
	event2->Register(customer1);

	event1->Notify();
	event2->Notify();

}