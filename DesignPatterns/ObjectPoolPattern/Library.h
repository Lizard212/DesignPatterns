#pragma once
#include"Book.h"
#include<list>

using namespace std;

class Library
{
private:
	Book book;
	static Library library;
	Library() {}
public:
	static Library getInstance()
	{
		return library;
	}

	void releaseBook()
	{
		
	}

	void aquireBook()
	{

	}



};