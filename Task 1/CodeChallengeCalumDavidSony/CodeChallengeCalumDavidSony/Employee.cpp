#include "Employee.h"
#include "Observer.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

// Abstraction function exstended 
 void Employee::update(const string& state, const string& from)
 {
	// name inherited from Observer

	std::cout << "\n Production Notification! \n" << std::endl;
	std::cout << " Name of Employee : " << name << std::endl;
	std::cout << " Role of " << name << " : " << role << std::endl;
	std::cout << " Currnet Registered Machine of Interest : " << from << std::endl;
	std::cout << from << "'s State Status : " << state << std::endl;


}


