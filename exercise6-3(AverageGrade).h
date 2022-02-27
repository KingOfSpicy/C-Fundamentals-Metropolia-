#include <iostream>
using namespace std;

int main()
{
    float point;
    float pSum=0;
    float n=0;
	float n2=0;
    float averPoint;
	
	cout<<"Program calculates the test grade average.\nFinish inputting with a negative number.\n";
	do{
	    cout<<"Input grade (4-10) ";
	    cin>>point;
	    
	    if(point>=0){
	        pSum=pSum+point;
	        n++;
			if(point>=4 && point<=10){
				n2++;
			}
	    }else{
	        if(pSum+point<0){
	                cout<<"\nYou did not input any grades.";
	        }else{
	        averPoint=pSum/n;
	        cout<<"You inputted "<<n2<<" grades.\n";
	        cout<<"Grade average: "<<averPoint<<endl;
	        }
	    }
	}
	while(point>=0);
}