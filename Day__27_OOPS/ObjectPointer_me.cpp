#include<iostream>
using namespace std;
class Cricketer{
public:
  string name;
  int run;
  float average;
  Cricketer(string name, int run,float average){
    this->name = name;
    this->average = average;
    this->run = run;
  }
  void print(){
    cout << name << endl;
    cout << run << endl;
    cout << average << endl;
  }
};

int main(){
  Cricketer c1("Virat", 14000, 59.5);
  Cricketer c2("Sachin Tendulkar sir", 18000, 48.9);

  // OBJECT POINTER
  Cricketer* c3 = new Cricketer("ABCD", 9000, 20);
  c3->print();
  (*c3).print();
  // c3.print(); //ERROR ----> bze c3 is not a object its a pointer storing address of the object ("ABCD", 9000, 20);

  c1.print(); // no error

  c3 = &c2;
  c3->print(); // "Sachin ...." 18000   48.9
}