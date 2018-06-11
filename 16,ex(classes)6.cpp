//to implement Fuel calculation for Flight using classes

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Flight
{
    int FlightNumber;
    string Destination;
    float Distance, Fuel;
public:
    void Feed_Info();
    void CalFuel();
    void Show_Fuel();
};

void Flight::Feed_Info()
{
    cout<<"Enter Flight Number : ";
    cin>>FlightNumber;
    cin.ignore(32767,'\n');
    cout<<"Enter Destination : ";
    getline(cin,Destination);
    cout<<"Enter Distance(in km) to Destination : ";
    cin>>Distance;
}
void Flight::CalFuel()
{
    if(Distance<=1000)
        Fuel=500;
    else if(Distance>=1000||Distance<=2000)
        Fuel=1100;
    else
        Fuel=2200;
}

void Flight::Show_Fuel()
{
    cout<<"For Flight no "<<FlightNumber<<" going to "<<Destination<<", the fuel requirement is "<<Fuel<<" for a distance of "<<Distance<<"km";
}

int main()
{
    Flight a;
    cout<<"Enter Flight info  \n\n";
    a.Feed_Info(); cout<<"\n";
    cout<<"To calculate fuel requirement press Y : ";
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    a.CalFuel();
    else
    {
        cout<<"For real.";
        exit(0);
    }
    cout<<"\nShowing calculated stuff : \n\n";
    a.Show_Fuel();
    return 0;
}
