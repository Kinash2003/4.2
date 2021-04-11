//animals.h
#pragma once
#include "Mammals.h"

class animals : public Mammals
{
private:
	int a,b,c;
public:
	animals();
	animals(int a, int b, int c);
	~animals();
	virtual double Years();
	virtual string Eyes();
	virtual string Kind();
	virtual string Íair();
	virtual double Growth();
	virtual ostream& Description(ostream& out) const;
};


