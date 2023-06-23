#include "Subject.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
// updates state whilst saving the previous state to notify the change
void Subject::setState(string s) {
	string prevState = state;
	state = s;
	notifyAallObservers(prevState);
}
// stores observers at end of vector // end of the line 
void Subject::attach(Observer* o) {
	observers.push_back(o);
}
// loops through elements of observers, then updates the Observer, with two parameters of state and from(machine)
void Subject::notifyAallObservers(string from) {
	for (Observer* observer : observers) {

		observer->update(state, from);
	}
}