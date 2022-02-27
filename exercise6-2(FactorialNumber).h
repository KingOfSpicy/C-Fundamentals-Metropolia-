#include <iostream>
using namespace std;

int main()
{
    int a=1;
	int L;
	int f=1;
	
	cout << "Input an integer:";
	cin>>L;
	
	if(L>=0){
    while(a<=L){
        f=f*a;
        a++;
    }
	}else{
	    cout<<"program is ending.."<<endl;
	}
	cout<<"The factorial of number "<<L<<" is "<<f<<endl;
}