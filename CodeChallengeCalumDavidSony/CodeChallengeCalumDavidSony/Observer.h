#pragma once
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

class Observer {

public:
	
	string name;

	// Constructor //
	// initialize variable of name with observer name
	Observer(const string& observerName) : name(observerName) {}

	// obligatory function // Abstraction
	virtual void update(const string& state, const string& from) = 0;
};

