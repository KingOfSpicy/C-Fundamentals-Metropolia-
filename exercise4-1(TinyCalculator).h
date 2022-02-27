#include <iostream>
using namespace std;

int main()
{
	int n, n2;

	cout << "Input first integer:";
	cin >> n;
	cout << "Input second integer:";
	cin >> n2;
	
	cout << n<<"+"<<n2<<" = "<< n+n2;
	
	cout <<"\n"<<n<<"-"<<n2<<" = "<< n-n2;
	
	cout <<"\n"<<n<<"*"<<n2<<" = "<< n*n2;
	
	cout <<"\n"<<"Remainder: "<< n%n2<< endl;
	
	return 0;
}
