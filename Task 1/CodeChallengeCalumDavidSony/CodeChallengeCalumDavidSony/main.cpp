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
	Employee e3("David", "Machine Maintenace");
	Machine m1("PRODUCING", " Machine A");
	Machine m2("IDLE", " Machine B" );
	Machine m3("IDLE", " Machine C" );


	// Registering interest !
	m1.attach(&e1); // attach Calum(e1) to machine 1
	m2.attach(&e2); // attach Mathew to machine 2
	m3.attach(&e3); // attach David to machine 3

	// Updates 
	m1.setState("IDLE");
	m2.setState("PRODUCING");
	m3.setState("STARVED");

	return 0;
	
}