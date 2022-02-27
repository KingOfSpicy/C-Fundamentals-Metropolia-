#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Input an integer: ";
	cin >> n;
	if(n%2==0){
		cout << "The number "<<n<<" is even."<<endl;
	    
	}
		else{
			cout << "The number "<<n<<" is odd."<<endl;
		}
}