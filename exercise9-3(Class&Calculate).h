#include <iostream>
using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}

class Printer
{
    public:
    int Print();
};
int Printer::Print()
{   
    Calculator c1;
    int first1;
    int second2;
    cout<<"Give a first integer: ";
    cin>>first1;
    cout<<"Give a second integer: ";
    cin>>second2;
    cout<<"Sum: "<<c1.Sum(first1, second2);
}
int main()
{  
  Printer object;
  object.Print();
} 