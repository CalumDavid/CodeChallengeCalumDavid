#pragma once
#include "Subject.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

class Machine : public Subject {

private:
	string name;

public:
	string getName();

	// Constructor //
	// initialize base class of Subject with starting state 
	// initialize variable of name with machine name
	Machine(const string& machineName, const string& startingState) : Subject(startingState), name(machineName) {}
	
};

