#include<iostream>
using namespace std;
class Student{ // User Defined Data Type
public:
    string name; // string - data structure hai -- char's array...yes
    int rno;
    float cgpa;
    // Constructor Overloading
    Student(string n, float c, int r){ // Parameterised Constructor
        rno = r;
        name = n;
        cgpa = c;
    }
    Student(){ // Default Constructor
        
    }
    void print(){
      cout << name << " " << rno << " " << cgpa << endl;
    }
};

void change(Student s){
  s.name = "Akash";
}
void changeOk(Student& s){
  s.name = "Changed";
}

int main(){
    // Student x;
    // x.name = "Sumit";
    // x.rno = 39;
    // x.cgpa = 8.7;

    Student x("Sumit",8.7,39);
    change(x); // paas by value ---> no change
    x.print();
    // paas by reference ke liye & use krna hoga
    changeOk(x);
    x.print();
}