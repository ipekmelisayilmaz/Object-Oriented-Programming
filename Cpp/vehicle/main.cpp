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
int main()
{
    //önce base classın yapıcı metodu çalışacak sonra derived classın yapıcı metodu çalışacak


    
    Vehicle item2 =  Vehicle("Skoda",2019,"White");//vehicle'den üretildi
     /*std::*/cout<< "Vehicle " << item2.getManufacturer() << /*std::*/endl;

    Car item1 =  Car();//car'dan üretildi
    item1.setManufacturer("TOGG") ;//araç bilgisi verildi
    /*std::*/cout<< "Vehicle " << item1.getManufacturer() /*ekrana yazdırıldı*/ << /*std::*/endl;

      Car item3 =  Car("Opel",2020,"blue");//car'dan üretildi
    item3.setManufacturer("TOGG") ;//araç bilgisi verildi
    /*std::*/cout<< "Vehicle " << item3.getManufacturer() /*ekrana yazdırıldı*/ << /*std::*/endl;
    char c = getchar();

    return 0;
}