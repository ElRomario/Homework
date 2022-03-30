#include "Date.h"
#include "iostream"

using namespace std;
 Date::Date() 
{
	 y = 2001;
	 m = 9;
	 d = 11;

}
void Date::SetNullDate()
{
	 y = 0;
	 m = 0;
	 d = 0;
}
void GetDate()
{
	int d, m, y;
}
void Date::SetDate()
{
	int inputD, inputM, inputY;
	cin >> inputD >> inputM >> inputY;
	d = inputD;
	m = inputM;
	y = inputY;
}
void Date::print ()
{
	cout << d<<"."<< m<<"."<< y << "\n";
}
