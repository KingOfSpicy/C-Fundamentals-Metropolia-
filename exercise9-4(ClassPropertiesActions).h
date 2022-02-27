#include <iostream>
#include <string>
using namespace std;
class Dog
{
    public:
    int age;
    string name, race, voice;
    
    string Bark();
    void PrintInformation();
    Dog(int new_age, string new_name, string new_race, string new_voice);
};
void Dog::PrintInformation()
{
	cout <<"name: "<<name<<"\n";
    cout <<"age: "<<age<<"\n";
    cout <<"race: "<<race<<"\n";
}
Dog::Dog(int new_age, string new_name, string new_race, string new_voice)
{
  age = new_age;
  name = new_name;
  race = new_race;
  voice = new_voice;
}
string Dog::Bark()
{
    return voice;
}

int main()
{
  Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
  buffy.PrintInformation();
  cout << "Dog says: " << buffy.Bark();
} 