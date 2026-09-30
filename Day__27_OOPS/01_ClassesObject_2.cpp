#include<iostream>
using namespace std;
class Student{
public:
  string name;
  int roll;
  float cgpa;
  Student(string name,int roll,float cgpa){
    this->name = name;
    this->roll = roll;
    this->cgpa = cgpa;
  }
  void print(){
    cout << name << " " << roll << " " << cgpa << endl;
  }
};

int main(){
  Student s1("Ajit", 30, 9.7);
  s1.print();
  
}