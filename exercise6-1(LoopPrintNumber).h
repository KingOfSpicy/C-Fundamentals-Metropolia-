#include <iostream>
using namespace std;

int main()
{
    int a;
	int L;
	cout << "Input an integer:";
	cin>>L;
	
	if(L>=0){
	for(a=1; a<=L; a++){
	    cout<<a<<endl;
	}
	}else{
	    cout<<"program is ending.."<<endl;
	}
}