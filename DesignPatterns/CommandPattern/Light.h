#pragma once
#include<iostream>

using namespace std;

class Light {
public:
	void TurnOn() {
		cout << "The light is on" << endl;
	}

	void TurnOff() {
		cout << "The light is off" << endl;
	}
};