#include<iostream>
using namespace std;
int main(){
  // Eligible to drive or not
  int age;
  cout << "Enter your age: ";
  cin >> age;
  if(age>=18){
    cout << "You can drive.";
  }else{
    cout << "You can not drive.";
  }
}