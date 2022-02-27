#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
	int x;
	int y;

    cout << "Choose desired calculation:\n1: subtraction\n2: addition\n3: multiplication\n4: division\n5: Remainder";

	cout << "\nChoose a calculation:";
	cin >> choice;
	cout << "Input first number:";
	cin >> x;
	cout << "Input second number:";
	cin >> y;
	
    if(choice==1){
        cout<<x<<"-"<<y<<" = "<<x-y<<endl;
    }else if(choice==2){
        cout<<x<<"+"<<y<<" = "<<x+y<<endl;
    }
    else if(choice==3){
        cout<<x<<"*"<<y<<" = "<<x*y<<endl;
    }
    else if(choice==4){
        cout<<x<<"/"<<y<<" = "<<x/y<<endl;
    }
    else{
        cout<<x<<"%"<<y<<" = "<<x%y<<endl;
    }
}