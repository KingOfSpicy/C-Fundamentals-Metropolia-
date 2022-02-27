#include <iostream>
using namespace std;

int main()
{
	int first_number;
	int second_number;
	int sum_number;

	cout << "Type the first number:";
	cin >> first_number;
	cout << "Type the second number:";
	cin >> second_number;
	
	sum_number = first_number + second_number; //do the addition
	
	cout << "Sum of the numbers is " << sum_number << endl;
}