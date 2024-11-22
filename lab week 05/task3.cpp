#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter your score : " << endl;
	cin >> score;
	if (score < 0 || score > 100) {
		cout << "You enterd an invalid number";
	}
	score /= 10;
	switch (score) {
	case 9 :
		cout << "Your grade is A";
		break;
	case 8 : 
		cout << "Your grade is B";
		break;
	case 7 :
		cout << "Your grade is C";
		break;
	case 6:
		cout << "Your grade is D";
		break;
	default : 
		cout << "Your grade is F";
		break;
	}
}