#include <iostream>
using namespace std;

int main ()
{
	double basic_salary, gross_salary, house_rent_allowance, dearness_allowness;
	cout << "Enter your basic salary : ";
	cin >> basic_salary;
	if (basic_salary <= 10000) {
		house_rent_allowance = 0.2 * basic_salary;
		dearness_allowness = 0.8 * basic_salary;
		gross_salary = basic_salary + house_rent_allowance + dearness_allowness;
		cout << "Gross salry of the employee is : " << gross_salary << endl;
	}
	else if (basic_salary <= 20000) {
		house_rent_allowance = 0.25 * basic_salary;
		dearness_allowness = 0.9 * basic_salary;
		gross_salary = basic_salary + house_rent_allowance + dearness_allowness;
		cout << "Gross salry of the employee is : " << gross_salary << endl;
	}
	else if (basic_salary <= 20000) {
		house_rent_allowance = 0.30 * basic_salary;
		dearness_allowness = 0.95 * basic_salary;
		gross_salary = basic_salary + house_rent_allowance + dearness_allowness;
		cout << "Gross salry of the employee is : " << gross_salary << endl;
	}
	else {
		cout << "You have entered in valid value" << endl;
	}
}