#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

class ResultsCache
{
private:
	static list<double> cache;
public:
	static void  Remember(double value)
	{
		cache.push_back(value);
	}

	static void clearMemory()
	{
		cache.clear();
	}

	static double getCacheResult(int index)
	{
		list<double>::iterator i = cache.begin();
		advance(i, index);
		
		return *i;
	}
};

list<double> ResultsCache::cache;
class ICalc
{
public:
	virtual double Add() = 0;
	virtual double Subtract() = 0;
	virtual double Multiply() = 0;
	virtual double Divide() = 0;
};

class SimpleCaculator : ICalc
{
private:
	double first_number;
	double second_number;
public:
	SimpleCaculator(double _first_number, double _second_number)
	{
		this->first_number= _first_number;
		this->second_number = _second_number;
	}
	//void setFirstNumber(double _first_number)
	//{
	//	this->first_number = _first_number;
	//}
	//void setSecondNumber(double _second_number)
	//{
	//	this->second_number = _second_number;
	//}

	double Add()
	{
		double value = first_number + second_number;
		ResultsCache::Remember(value);
		return value;
	}

	double Subtract()
	{
		double value = first_number - second_number;
		ResultsCache::Remember(value);
		return value;
	}
	double Multiply()
	{
		double value = first_number * second_number;
		ResultsCache::Remember(value);
		return value;
	}

	double Divide()
	{
		if (0 == second_number)
		{
			return 0;
		}
		double value = (first_number / second_number);
		ResultsCache::Remember(value);
		return value;
	}
};



static void MementoPattern()
{
	SimpleCaculator cacul(10, 20);
	cout << "Add " << cacul.Add() << endl;
	cout << "Subtract " << cacul.Subtract() << endl;
	cout << "Multiply  " << cacul.Multiply() << endl;

	cout << "Manual divide: " << (ResultsCache::getCacheResult(0) / ResultsCache::getCacheResult(1)) << endl;
	
}