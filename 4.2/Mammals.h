//Mammals.h

#pragma once
#include <iostream>
using namespace std;
class Mammals {
	
public:
	virtual double Years() = 0;
	virtual string Eyes() = 0;
	virtual string Kind() = 0;
	virtual string Íair() = 0;
	virtual double Growth() = 0;
	virtual ostream& Description(ostream& out) const = 0;
};
