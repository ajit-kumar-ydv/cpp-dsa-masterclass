#include<iostream>
using namespace std;
int main(){
  // Take a char as input and print its ASCII value.
  // Sample ---- input : Z => output: 90;

  char ch;
  cout << "Enter a char: ";
  cin >> ch;
  cout << "ASCII value of " << ch << " = " << (int)ch;
}