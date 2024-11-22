#include <iostream> 
using namespace std;


int main()
{
	int roll_number;
	cout << "Enter your roll number : ";
	cin >> roll_number;
	if (roll_number <= 0) {
		cout << "Roll number cannot be negative or zero ";
		return 0;
	}
	if (roll_number % 2 != 0) {
		cout << "Your group is alpha" << endl;
	}
	else {
		cout << "Your group is omega " << endl;
	}
	return 0;

}