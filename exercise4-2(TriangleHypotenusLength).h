#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, n2, sqn, sqn2, sumSqn;
	double h;

	cout << "Input first triangle leg:";
	cin >> n;
	cout << "Input second triangle leg:";
	cin >> n2;
	
	sqn = n*n;
	sqn2 = n2*n2;
	sumSqn = sqn+sqn2;
	
	h = sqrt(sumSqn);
		
	cout <<"Hypotenuse length: "<< h<< endl;

	return 0;
}