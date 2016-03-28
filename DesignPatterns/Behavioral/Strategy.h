#pragma once
#include<iostream>
using namespace std;

class Sort
{
public:
	virtual void sort() const = 0;
};

class Merge : public Sort
{
public:
	virtual void sort() const
	{
		cout << " Merge sort()\n";
	}
};

class Quick : public Sort
{
	virtual void sort() const
	{
		cout << " Quick sort()\n";
	}
};

class Heap : public Sort
{
	virtual void sort() const
	{
		cout << " Heap sort()\n";
	}

};

// context

class Collection
{
private:
	Sort * sort;
public:
	Collection() {}
	void setSort(Sort *s)
	{
		sort = s;
	}
	void Sort() const
	{
		sort->sort();
	}
};

static void StrategyPattern()
{
 
	Merge merge;
	Quick quick;
	Heap heap;
	Collection col;
	col.setSort(&merge);
	col.Sort();


}