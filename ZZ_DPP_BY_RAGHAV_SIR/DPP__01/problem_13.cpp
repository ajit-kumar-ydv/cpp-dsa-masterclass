#include<iostream>
using namespace std;
int main(){
  //Write a program to calculate the Volume of a sphere given radius r. Use pi=3.14
  // Sample --- input: 3  => output: 113.04

  cout << "Enter radius of sphere: ";
  //float r;
  double r;
  cin >> r;
  cout << "Volume of sphere = " << 4.0 / 3 * 3.14 * r * r * r;
}