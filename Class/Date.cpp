#include "Date.h"
#include "iostream"

using namespace std;
Date::Date() { y = 0; m = 0; d = 0; }

 Date::Date(int y, int m, int d)
 {
	 this->y = y;
	 this->m = m;
	 this->d = d;
 }

void Date::SetDate()
{
	int inputD, inputM, inputY;
	cin >> inputD >> inputM >> inputY;
	d = inputD;
	m = inputM;
	y = inputY;
}
void Date::GetDate()
{
	cout << d<<"."<< m<<"."<< y << "\n";
}
