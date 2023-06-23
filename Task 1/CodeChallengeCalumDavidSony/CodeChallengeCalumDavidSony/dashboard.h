#pragma once
#include "Observer.h"
#include <iostream>
#include <vector>
#include <string>
class dashboard : public Observer 
{
private: 

public: 
	void update(const string& state, const string& from) override;
};

