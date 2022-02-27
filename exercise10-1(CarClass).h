#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
  public:
  int weight;
  int top_speed;
  long driven_km;
  Vehicle(int weight, int top_speed, long driven_km);
  void Drive(int journey);
  int InputWeight();
  int InputTopSpeed();
  long InputDrivenKM();
};

Vehicle::Vehicle(int Aw, int Ats, long Akm)
{
  weight = Aw;
  top_speed = Ats;
  driven_km = Akm;
}

void Vehicle::Drive(int journey)
{
  driven_km += journey;
}

int Vehicle::InputWeight()
{
  return weight;
}

int Vehicle::InputTopSpeed()
{
  return top_speed;
}

long Vehicle::InputDrivenKM()
{
  return driven_km;
}

class Car : public Vehicle
{
    public:
    string brand;
    string model;
    string lip;
    bool running;
    
    Car(int weight, int top_speed, long driven_km, string carsBrand, string carsModel, string carsLip, bool carsRunning);
    void turn_on();
    void turn_off();
    void check_up();
};
    Car::Car(int weight, int top_speed, long driven_km, string carsBrand, string carsModel, string carsLip, bool carsRunning):Vehicle(weight, top_speed, driven_km)
{
    brand = carsBrand;
    model = carsModel;
    lip = carsLip;
    running = carsRunning;
}
void Car::turn_on()
{
    running =true;
}
void Car::turn_off()
{
    running = false;
}
void Car::check_up()
{
    cout<<"car info:"<<"\n";
    cout<<"brand:"<<brand<<"\n";
    cout<<"model:"<<model<<"\n";
    cout<<"Kilometres:"<<driven_km<<"\n";
    cout<<"weight:"<<weight<<"\n";
    cout<<"Top speed:"<<top_speed<<"\n";
    cout<<"License plate:"<<lip<<"\n";
    if(running== true)
    {
        cout<<"car is running."<<"\n";
    }else
    {
        cout<<"car is not running."<<"\n";
    }
}

int main()
{
  int weight, speed;
  long km;
  string brand, model, license;
 
  // ask information about car

  cout << "Input car brand: ";
  cin >> brand;
  
  cout << "Input car model: ";
  cin >> model;
  
  cout << "Input car license plate number: ";
  cin >> license;
  
  cout << "Input car weight: ";
  cin >> weight;
  
  cout << "Input car top speed: ";
  cin >> speed;

 
  cout << "Input distance traveled by car: ";
  cin >> km;
  cout << endl;
  Car carX(weight, speed, km, brand, model, license, 0);

 
  carX.check_up();
  carX.turn_on();
  carX.Drive(95);
  cout << endl;
  carX.check_up();

}