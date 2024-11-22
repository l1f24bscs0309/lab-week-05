#include <iostream>
using namespace std;

int main()
{
	float num_of_sec;

	cout << "Enter the number of seconds : ";
	cin >> num_of_sec;
	if (num_of_sec >= 60 && num_of_sec < 3600) {
		cout << "The minutes are " << num_of_sec / 60 << endl;
	}
	else if (num_of_sec >= 3600 && num_of_sec < 86400) {
		cout << "The hours are " << num_of_sec / 3600 << endl;
	}
	else if (num_of_sec >= 86400) {
		cout << "Total days are : " << num_of_sec / 86400 << endl;
	}
	else {
		cout << "Enter valid seconds" << endl;
	}
	return 0;
}