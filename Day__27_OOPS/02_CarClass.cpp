#include<iostream>
using namespace std;
class Car{
public:
  string name;
  int seat;
  int power;
  float mileage;
  bool isE20Compitable;
  string type;
  Car(string name,int seat,int power,float mileage,bool isE20Compitable, string type){
    this->name = name;
    this->seat = seat;
    this->power = power;
    (*this).mileage = mileage; // same as this->mileage=mileage;
    this->type = type;
    this->isE20Compitable = isE20Compitable;
  }
  void print(){
    cout << name << " " << seat << " " << power << " " << mileage << " " << isE20Compitable << " " << type << endl;
    }
};

int main(){
  Car c1 = {"BWM M5", 4, 10000, 8, true, "electric"};
  c1.print();
  Car c2("Punch", 5, 3000, 20, false, "Fuel");
  c2.print();
}