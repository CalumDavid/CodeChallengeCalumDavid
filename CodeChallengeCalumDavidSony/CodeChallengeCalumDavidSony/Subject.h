#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Observer.h"
using std::string;
using std::vector;

class Subject {

protected:
	// to cover the aggregation arrow I need ensure observer can exist indepenently of subject
	vector<Observer*> observers;

	string state;

public:
	// Contructor //
	// initialize variable of state to starting state
	Subject(const string& startingState) : state(startingState) {}

	void setState(string s);

	void attach(Observer* o);

	void notifyAallObservers(string from);

	

	
};

