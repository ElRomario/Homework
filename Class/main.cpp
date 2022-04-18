#include "Date.h"
#include "Lesson.h"
#include "stdio.h"
#include "iostream"

using namespace std;
int main() 
{
	int input1, input2;
	cout << "What would you like to see?\n--1 -> Date operations\n--2 -> Lesson operations\n";
	cin >> input1;
	switch (input1)
	{
	case 1:
	{
		Date date;
		date.GetDate();
		cout << "Enter preferenced date:\n";
		date.SetDate();
		date.GetDate();
		return main();
	}

	case 2:
	{
		Lesson BPI;
		BPI.SetLesson();
		BPI.PrintLesson();
		return main();
	}
	}
	






}