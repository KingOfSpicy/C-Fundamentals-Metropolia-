#include <iostream>

#include <string>

using namespace std;

/*my code start from here*/
class PrintClass
{
    public:
    string brand;
    
    PrintClass();
    void print(string a);
};

PrintClass::PrintClass()
{
    brand="Unknown";
}
void PrintClass::print(string a)
{
    cout<<a<<endl;
}
/*my code ends here*/

int main()

{

  char charstring[50];

  cout << "Input a character string for printing:";

  cin.get(charstring, 50);

  PrintClass printer;

  printer.print(charstring);

}