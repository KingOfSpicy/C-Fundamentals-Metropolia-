#include <iostream>
using namespace std;
 
int main()
{
    int daysLoop;
    float days;
    float workData[31];
    float tTWDL;
    
	cout<<"The program calculates the total amount of "<<"\n"<<"work hours during a given time frame and the average work day length.";
    cout<<"\n"<<"How many days: ";
    cin>>days;
    
    for(daysLoop=0; daysLoop<days; daysLoop++){
            cout<<"Input hours of workday "<<daysLoop+1<<": ";
            cin>>workData[daysLoop];
    }
    for(daysLoop=0; daysLoop<days; daysLoop++){
            tTWDL=tTWDL+workData[daysLoop];
    }
    cout<<"Total work hours: "<<tTWDL;
    float averWDL=tTWDL/days;
    cout<<"\n"<<"Average work day length: "<<averWDL;
    cout<<"\n"<<"Inputted hours: ";
    
    for(daysLoop=0; daysLoop<days; daysLoop++){
            cout<<workData[daysLoop]<<" ";
    }
    cout<<endl;
    
    
    /*for(index=0; index=days; index++){
        tTWDL=tTWDL+workData[index];
        cout<<"Total work hours: "<<tTWDL;
    }*/
    
    /*float averWDL=tTWDL/days;
    
    cout<<"Average work day length: "<<averWDL;
    
    for(index=0; index=days; index++){
        cout<<"Inputted hours: "<<workData[index]<<" "<<endl;
    }*/
    
}
