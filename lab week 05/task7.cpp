#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	cout << "Enter day , month , year (last two digits) in respected order : ";
	cin >> day >> month >> year;
	if (day * month == year) {
		cout << "The date is magic ";
	}
	else {
		cout << "The date is not magic";
	}
	return 0;
}