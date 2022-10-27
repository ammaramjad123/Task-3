#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	int cd;
	int d;
	int m;
	int y;

	date t1;
	date t2;

	cout << "Enter the Day of your Birthdate : ";
	cin >> d;
	cout << "Enter the Month of your Birthdate : ";
	cin >> m;
	cout << "Enter the Year of your Birthdate : ";
	cin >> y;
	t1.setday(d);
	t1.setmonth(m);
	t1.setyear(y);

	cout << "Enter the current year : ";
	cin >> cd;
	t2.setyear(cd);
	t2.display(d,m,y,cd);

	cout << "Your current age is :" << t2.init(cd,y) << endl;
	system("pause");
	return 0;
}