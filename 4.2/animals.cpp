//animals.cpp
#include "animals.h"
#include <time.h>

animals::animals()
	: a(0),b(0), c(0)
{}
animals::animals(int a, int b, int c)
	: a(a),b(b),c(c)
{}


animals::~animals()
{}
ostream& animals::Description(ostream& out) const
{
	out << " Animals: " << endl;
	out << " Description: " << endl;
	return out;
}
double animals::Years()//г�
{
	srand(unsigned(time(NULL)));
	double a = rand() % 25;
	return a;
}
string animals::Eyes()//���
{
	srand(unsigned(time(NULL)));
	char color[5][7] = { "blue", "green", "red","gray","mixed" };
	string b = color[rand() % 5];
	return b;
}
string animals::Kind()//���
{
	srand(unsigned(time(NULL)));
	char color[5][11] = { "woman dog", "man dog","woman cows"," man cows" };
	string b = color[rand() % 4];
	return b;
}
string animals::�air()//�������
{
	srand(unsigned(time(NULL)));
	char color[5][7] = { "No", "black", "brown","white","yellow" };
	string b = color[rand() % 5];
	return b;
}
double animals::Growth()//г��
{
	srand(unsigned(time(NULL)));
	int a = 10 + rand() % 50;
	return a;
}
