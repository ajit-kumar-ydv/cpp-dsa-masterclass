#include<iostream>
using namespace std;
int main(){
  //Take positive integer input and tell if it is odd or even
  int n;
  cout << "Enter a number: ";
  cin >> n;
  n % 2 == 0 ? cout << "Even" : cout << "Odd";
}