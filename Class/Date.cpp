#include "Date.h"
#include "iostream"

using namespace std;
Date::Date() 
{
	y = 1945;
	m = 43;
	d = 123;

}
void Date::print ()
{
	cout << y << m << d;
}