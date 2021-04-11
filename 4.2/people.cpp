//people.cpp

#include "people.h"

#include <time.h>
people::people()
	: a(0),b(0)
{}
people::people(int a, int b)
	: a(a),b(b)
{}
people::~people()
{}

ostream& people::Description(ostream& out) const
{
	out << " People: " << endl;
	out << " Description: " << endl;
	return out;
}
double people::Years()//Ð³ê
{
	srand(unsigned(time(NULL)));
	double a = rand() % 100;
	return a;
}
string people::Eyes()//Î÷³
{
	srand(unsigned(time(NULL)));
	char color[5][7] = { "green", "blue", "gray","mixed","red" };
	string b = color[rand() % 5];
	return b;
}
string people::Kind()//Âèä
{
	srand(unsigned(time(NULL)));
	char color[5][7] = { "woman", "man" };
	string b = color[rand() % 2];
	return b;
}
string people::Íair()//Âîëîññÿ
{
	srand(unsigned(time(NULL)));
	char color[5][7] = { "brown", "yellow", "black","No","white" };
	string b = color[rand() % 5];
	return b;
}
double people::Growth()//Ð³ñò
{
	srand(unsigned(time(NULL)));
	int a = 120 + rand() % 80;
	return a;
}
