#include<iostream>
using namespace std;
int main(){
  // Compute KE of a moving object.
  // Take mass m(in kg, double) and velocity v (in m/s)
  double m, v;
  cout << "Enter mass in kg (m): ";
  cin >> m;
  cout << "Enter velocity in m/s (v): ";
  cin >> v;

  double ke = 0.5 * m * v * v;
  cout << "Kinetic Energy = " << ke;
  
}