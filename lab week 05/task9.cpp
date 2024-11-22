#include <iostream>
using namespace std;

int main()
{
	float len1, width1, len2, width2, area1, area2;
	
	cout << "Enter the length and width of 1st rectangle : ";
	cin >> len1 >> width1;
	cout << "Enter the length and width of 2nd rectangle : ";
	cin >> len2 >> width2;
	if (len1 < 0 || len2 < 0 || width1 < 0 || width2 < 0) {
		cout << "Enter valid lengths or widths " << endl;
		return 0;
	}
	area1 = len1 * width1;
	area2 = len2 * width2;

	if (area1 > area2) {
		cout << "Reactangle 1 has greater area " << endl;
	}
	else {
		cout << "Rectangle 2 has greater area " << endl;
	}
}