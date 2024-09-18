#include <iostream>
//using std::string;
#include<string>
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
virtual void start()
{
cout<<"Vehicle has been started"<<endl;
}
virtual void stop()
{
 cout<<"Vehicle has been stopped"<<endl;   
}
virtual void drive()
{
    cout<<"Vehicle is being driven.."<<endl;
}
virtual string toString()
{
    return manufacturer+" - "+ to_string(year)+"-"+ color;
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
void drive() override
{
cout<<"The car manufacturer by : "<<this -> manufacturer<<" is being driven"<<endl;
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
void drive() override
{
cout<<"The bus manufacturer by : "<<this -> manufacturer<<" is being driven"<<endl;
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
void drive() override
{
cout<<"The schoolbus manufacturer by : "<<this -> manufacturer<<" is being driven"<<endl;
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

    Car item1 =  Car("TOGG",2023,"red");//car'dan üretildi
    //item1.setManufacturer("TOGG") ;//veya bu şekilde
   // item1.setYear(2023); veya bu şekilde
    //item1.setColor("red"); veya bu şekilde
    cout<<  item1.toString() /*ekrana yazdırıldı*/ << endl;
    item1.openSunroof();



    Car item3 =  Car("Opel",2020,"blue");//car'dan üretildi
    cout<< item3.toString() /*ekrana yazdırıldı*/ << endl;
    item3.openSunroof();

     Bus item4 =  Bus("Megane",2022,"black");
    cout<< item4.toString() /*ekrana yazdırıldı*/ << endl;
    item4.scheduling();
    
    SchoolBus item5 = SchoolBus("Isuzu",2015,"Yellow");
    cout<< item5.toString() /*ekrana yazdırıldı*/ << endl;
    item5.scheduling();
    item5.getFare();

    Truck item6 = Truck("RangeRover",2022,"white");
    cout<< "Vehicle " << item6.getManufacturer() /*ekrana yazdırıldı*/ << endl;
    item6.transport();
    cout<<item6.getManufacturer()<<endl;

    item1.drive();
    item1.stop();//virtual edildi ama override edilmek zorunda değil

    item3.drive();
    item3.stop();//virtual edildi ama override edilmek zorunda değil

    item4.drive();
    item4.stop();//virtual edildi ama override edilmek zorunda değil

    item5.drive();
    item5.stop();//virtual edildi ama override edilmek zorunda değil

    

    char c = getchar();

    return 0;
}