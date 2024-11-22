#include <iostream>
using namespace std;

int main()
{
	int num_of_books;
	cout << "Enter the num of books you purchased this month : ";
	cin >> num_of_books;
	if (num_of_books < 0) {
		cout << "you cannot have negative number of books";
		return 0;
	}
	switch (num_of_books) {
	case 0 :
		cout << "You have 0 point";
		break;
	case 1:
		cout << "You have 5 points";
		break;
	case 2:
		cout << "You have 15 points";
		break;
	case 3:
		cout << "You have 30 points";
		break;
	default : 
		cout << "You have 60 points";
		break;
	}


}