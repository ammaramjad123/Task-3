#include <iostream>
#include "Header.h"
using namespace std;
void date::setday(int a)
{
	day = a;
}

void date::setmonth(int b)
{
	month = b;
}
void date::setyear(int c)
{
	year = c;
}



int date::getday()
{
	return day;
}

int date::getmonth()
{
	return month;
}
int date::getyear()
{
	return year;
}

void date::setcurrentday(int f)
{
	currentd = f;
}


void date::display(int a,int b,int c,int d)
{
	cout << " day :" << a << " month :" << b << " year :" << c << endl;
	cout << " current year : " << d << endl;
}

int date::init(int x,int y)
{
	int v = x - y;
	return v;
}
