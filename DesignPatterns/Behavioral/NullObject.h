#pragma once
#include<iostream>

using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
};

class Dog : public Animal
{
	void makeSound()
	{
		cout << "woof!" << endl;
	}

};

class NullAnimal : public Animal
{
	void makeSound()
	{

	}
};

static void NullObject()
{
	Animal * animal = new  Dog();
	animal->makeSound();

	animal = new NullAnimal();

	animal->makeSound();

	delete animal;
}