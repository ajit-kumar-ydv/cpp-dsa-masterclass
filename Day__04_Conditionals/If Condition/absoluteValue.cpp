#include<iostream>
using namespace std;
int main(){
  //Take integer input and print the absolute value of that integer
  int num;
  cout << "Enter any integer: ";
  cin >> num;

  if(num<0){
    cout << "Absolute value of " << num << " = " << (-1) * num;
  }
  if(num >= 0){
    cout << "Absolute value of " << num << " = " << num;
  }
}