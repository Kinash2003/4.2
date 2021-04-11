// 4.2.cpp 
#include <iostream>
#include "people.h" 
#include "animals.h"
#include <Windows.h> 
using namespace std;
ostream& operator << (ostream& out, const Mammals& r)
{
	return r.Description(out);
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	people A;
	cout << A;
	cout << " Kind: " << A.Kind() << endl;
	cout << " How old: " << A.Years() << endl;
	cout << " Eye colour: " << A.Eyes() << endl;
	cout << " Growth: " << A.Growth() << endl;
	cout << " Нair: " << A.Нair() << endl;
	animals B;
	cout << B;
	cout << " Kind: " << B.Kind() << endl;
	cout << " How old: " << B.Years() << endl;
	cout << " Eye colour: " << B.Eyes() << endl;
	cout << " Growth: " << B.Growth() << endl;
	cout << " Нair: " << B.Нair() << endl;

}
