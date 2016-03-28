#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

class ChatPerson;
class Imessenger
{
public:

	virtual void addPerson(ChatPerson *person) = 0;
	virtual void Send(string message, ChatPerson *orginator) = 0;
};

class ChatPerson
{
		
	Imessenger* messenger;
	string name;

public:
	string getName()
	{
		return name;
	}

	ChatPerson(string name, Imessenger *messenger)
	{
		this->name = name;
		this->messenger = messenger;
	}
	void sendMessage(string message)
	{
		messenger->Send(message, this);

    }

	void receiveMessage(string message, ChatPerson *person)
	{
		cout << this->name + " " + "receive form " + person->name + ":"
			<< message << endl;
	}

	bool Equals(ChatPerson *other)
	{
		return (this->name == (other->name));
	}
};


class Messenger : public Imessenger
{
	list<ChatPerson*> persons;
public:
	Messenger(string messenger_name)
	{
		cout << messenger_name + " Messenger Started";
	}

	void addPerson(ChatPerson * person)
	{
		persons.push_back(person);
		cout << person->getName() + " add to messenger" << endl;
	}

	void Send(string message, ChatPerson * orginator)
	{
		
		for (list<ChatPerson*>::iterator i = persons.begin(); i != persons.end(); ++i)
		{
			if (*i != orginator)
			{
				(*i)->receiveMessage(message, orginator);
			}
		}
	}
};

static void MediatorPattern()
{
	Imessenger *messenger = new Messenger("T-Talk");

	ChatPerson *alice = new ChatPerson("alice", messenger);
	ChatPerson *bob = new ChatPerson("bob", messenger);
	ChatPerson *mr_robot = new ChatPerson("mr_robot", messenger);

	messenger->addPerson(alice);
	messenger->addPerson(bob);
	messenger->addPerson(mr_robot);

	mr_robot->sendMessage("Hello, It's me");
	bob->sendMessage("Who are u ?");

	delete messenger, alice, bob, mr_robot;

}