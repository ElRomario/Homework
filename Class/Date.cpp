#include "Date.h"
#include "iostream"

using namespace std;
Date::Date() 
{
	y = 2022;
	m = 10;
	d = 4;

}
void Date::print ()
{
	cout << y << m << d;
}