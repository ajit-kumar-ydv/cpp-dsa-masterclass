#include<iostream>
using namespace std;
int main(){
  int age;
  cout << "Enter your age: ";
  cin >> age;
  if(age >= 18)
    cout << "YOU CAN DRIVE";
  else
    cout << "YOU CAN NOT DRIVE";
}