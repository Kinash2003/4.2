//people.h
#pragma once
#include "Mammals.h"
#include <time.h>
class people : public Mammals
{
private:
	int a, b;
public:
	people();
	people(int a, int b);
	~people();
	virtual double Years();
	virtual string Eyes();
	virtual string Kind();
	virtual string Íair();
	virtual double Growth();
	virtual ostream& Description(ostream& out) const;


};

