#include<iostream>
using namespace std;
int main(){
  //Take four integers a,b,c,d as input. Compute and print (a+b) * (c+d).
  //sample --- input: 1 2 3 4  => output: 21

  int a, b, c, d;
  // cout << "Enter 1st integer: ";
  // cin >> a;
  // cout << "Enter 2nd integer: ";
  // cin >> b;
  // cout << "Enter 3rd integer: ";
  // cin >> c;
  // cout << "Enter 4th integer: ";
  // cin >> d;

  cin >> a >> b >> c >> d;

  cout << "(a+b) * (c+d) = " << (a + b) * (c + d);
}