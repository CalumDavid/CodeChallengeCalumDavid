#include <iostream>
#include <vector>
#include <string>
#include "Employee.h"
#include "Machine.h"
#include "Observer.h"
#include "Subject.h"
using std::string;
using std::vector;



int main() {

	// instances
	Employee e1("Calum", "Junior Software Engineer");
	Employee e2("Mathew", "Machine Operator");
	Machine m1("RUNNING", " Machine1");
	Machine m2("IDLE", " Machine2" );


	// Registering interest !
	m1.attach(&e1); // attach Calum(e1) to machine 1
	m2.attach(&e2); // attach Mathew to machine 2

	// Updates 
	m1.setState("IDLE");
	m2.setState("RUNNING");

	return 0;
	
}