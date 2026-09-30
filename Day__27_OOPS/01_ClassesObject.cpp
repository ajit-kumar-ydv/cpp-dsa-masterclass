#include<iostream>
using namespace std;
class Student{
public:
  string name;
  float cgpa;
  int roll;
  Student (string n,int c,int r){
    name = n;
    cgpa = c;
    roll = r;
  }
  Student(){// default constructor

  }
  void print(){
    cout << name << " " << cgpa << " " << roll << endl;
  }
};
int main(){
  Student s1("Ajit", 9.5, 25);
  Student s2;
  s2.name = "Ajit";
  s2.cgpa = 9.2;
  s2.roll = 4;
  s2.print();
  s1.print();
  
}