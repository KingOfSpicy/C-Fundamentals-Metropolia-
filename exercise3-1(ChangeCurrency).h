#include <iostream>
#include <string>
using namespace std;

int main()
{
	float dollars;
	//int second_number;
	float exchangeEuro;

	cout << "How much dollars do you want to exchange:";
	cin >> dollars;
	//cout << "Type the second number:";
	//cin >> second_number;
	
	exchangeEuro = dollars*0.727802; //counting
	
	cout << "Amount in euros: " << exchangeEuro << endl;
}