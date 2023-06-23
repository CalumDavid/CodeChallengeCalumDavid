#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Observer.h"
using std::string;
using std::vector;

class Employee : public Observer {
public:
	string role;

	// Constructor // 
	// initialize base class of observer with employee name 
	// initialize variable of role with employee role
	Employee(const string& employeeName, const string& employeeRole) : Observer(employeeName), role(employeeRole) {}

	// Abstraction function exstended 
	 void update(const string& state, const string& from) override; // only use override in . h
	
	
};
