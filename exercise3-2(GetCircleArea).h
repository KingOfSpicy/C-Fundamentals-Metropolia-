#include <iostream>
#include <string>
using namespace std;

int main()
{
	float radius;
	float c_area;

	cout << "Input circle radius:";
	cin >> radius;
	
	c_area = radius*radius*3.142; //counting
	
	cout << "Circle area with the given radius: " << c_area << endl;
}