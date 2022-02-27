#include <iostream>
using namespace std;

int main()
{
	char gender;
	int age;

	cout << "Are you a male or a female (m/f):";
	cin >> gender;
	cout << "Your age:";
	cin >> age;
	
	
	if(gender=='m'){
	    if(age>=0 && age<=55){
	        cout << "You are a man in his prime!"<<endl;
	    }else if(age>=56 && age<=100){
	        cout << "You are a wise man!"<<endl;
	    }else{
	        cout << "Error encountered!"<<endl;
	    }
	    
	}
		else if(gender=='f'){
	    if(age>=0 && age<=55){
	        cout << "You are like a blooming flower!"<<endl;
	    }else if(age>=56 && age<=100){
	        cout << "You look young for your age!"<<endl;
	    }else{
	        cout << "Error encountered!"<<endl;
	    }
	    
	}
		else{
		    cout << "Error encountered!"<<endl;
		}
}