#include <iostream>
//using std::string;
using namespace std;
class Vehicle
{
protected:
   string manufacturer;
   int year;
   string color;
public:
string getManufacturer()
{
    return manufacturer;
}
void setManufacturer(string value)
{
this->manufacturer = value;
}
int getYear()
{
return year;
}
void setYear(int value)
{
this->year = value;
}
string getColor()
{
    return this->color;
}
void setColor(string value)
{
this->color = value;
}

Vehicle()
{
    /*std::*/cout<<"\nAn instance has been derived from Vehicle"<<endl;
}
Vehicle(string manufacturer,int year,string color): Vehicle() //parametresiz fonksiyona çağrı yaptıldı kod tekrarına düşmemek amacıyla

{
    cout<<"\nAn instance with full parameters has been derived from Vehicle"<<endl;
    this->manufacturer=manufacturer;
    this->year=year;
    this->color=color;

}
void start()
{
cout<<"Vehicle has been started"<<endl;
}
void stop()
{
 cout<<"Vehicle has been stopped"<<endl;   
}
void drive()
{
    cout<<"Vehicle is driving..."<<endl;
}

};
class Car: public Vehicle
{
public:
Car()//parametre almayacak metot
{
    cout<<"\nAn instance has been derived from Car"<<endl;
}
Car(string manufacturer,int year,string color)//parametreler ile aşırı yüklenecek metot
 : Vehicle(manufacturer,year,color)
{
  cout<<"\nAn instance with full parameters has been derived from Car"<<endl;
}
void openSunroof()
{
    cout<< "The sunroof has been opened. " <<endl;
}
};
class Bus: public Vehicle
{
public:
Bus(string manufacturer,int year,string color)
:Vehicle(manufacturer,year,color)//Base class'a parametre gönderimi
{
     cout<<"\nAn instance with full parameters has been created from Bus Class"<<endl;

}
void scheduling()
{
    cout<<"Scheduled"<<endl;
}
};
class SchoolBus: public Bus
{
public:
SchoolBus(string manufacturer,int year,string color)
:Bus(manufacturer,year,color)
{
  cout<<"\nAn instance with full parameters has been created from SchoolBus Class"<<endl;
}
void getFare()
{
    cout<<"getFare() has been called"<<endl;
}

};
class Truck :public Vehicle
{
public:
 Truck(string manufacturer,int year,string color)
 :Vehicle(manufacturer,year,color)
{
    cout<<"\nAn instance with full parameters has been created from Truck Class"<<endl;
    
}
void transport()
{
    cout<<"transport() has been called"<<endl;
}
};
int main()
{
    //önce base classın yapıcı metodu çalışacak sonra derived classın yapıcı metodu çalışacak
    
    Vehicle item2 =  Vehicle("Skoda",2019,"White");//vehicle'den üretildi
     cout<< "Vehicle " << item2.getManufacturer() << endl;

    Car item1 =  Car();//car'dan üretildi
    item1.setManufacturer("TOGG") ;//araç bilgisi verildi
    cout<< "Vehicle " << item1.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item1.openSunroof();
    item1.start();


    Car item3 =  Car("Opel",2020,"blue");//car'dan üretildi
    cout<< "Vehicle " << item3.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item3.openSunroof();

     Bus item4 =  Bus("Megane",2022,"black");
    cout<< "Vehicle " << item4.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item4.scheduling();
    
    SchoolBus item5 = SchoolBus("Isuzu",2015,"Yellow");
    cout<< "Vehicle " << item5.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item5.scheduling();
    item5.getFare();

    Truck item6 = Truck("RangeRover",2022,"white");
    cout<< "Vehicle " << item6.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item6.transport();
    item6.start();
    item6.stop();
    cout<<item6.getManufacturer()<<endl;

    char c = getchar();

    return 0;
}