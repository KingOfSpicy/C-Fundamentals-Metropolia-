#include <iostream>

#include <string>

using namespace std;

char text[50];/*若不在這裡定義text，則下方會出現問題，說是text沒有被定義，因此要在外部創建*/
/*
https://stackoverflow.com/questions/10056093/was-not-declared-in-this-scope-error
*/
/*char charstring[50];*/

class AskAndPrint
{
    public:
    string characteristic;
    char charstring[];
    
    void DoYourThing(string a);
};

void AskAndPrint::DoYourThing(string a)
{
    cout<<charstring;
    cin.get(text,50);/*這裡如果不用get的話，會抓不到空白鍵*/
    a=text;
    cout<<a<<endl;
}

 
int main (void)

{  

   char charstring[] = "Write the text for printing:";

   AskAndPrint thing;

   thing.DoYourThing(text);

}