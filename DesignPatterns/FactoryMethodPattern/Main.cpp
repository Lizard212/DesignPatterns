#include<iostream>
#include"Factory.h"

using namespace std;

int main()
{
	IColor* p = NULL;
	IFactory* f = NULL;

	f = new Factory();
	p = f->Create("Red");
	cout << "\nColor is: " << p->Color() << "\n";
	delete p;
	p = f->Create("Yellow");
	cout << "\nColor is: " << p->Color() << "\n";
	delete p;

	p = f->Create("Black");
	cout << "\nColor is: " << p->Color() << "\n";

	delete p;
	system("pause");
	return 0;
}