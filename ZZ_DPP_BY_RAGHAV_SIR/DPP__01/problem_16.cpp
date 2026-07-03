#include<iostream>
using namespace std;
int main(){
  // Take an integer n as input. Print the minimum non-negative integer that must be added to n make it exactly divisible by 7.
  // Use the modulus operator
  // Samplr--- input: 20 => output : 1  (since 20+1 = 21 = 7*3)

  int n;
  cout << "Enter an integer: ";
  cin >> n;
  int minimum_req = ( 7 - (n % 7) ) % 7;

  cout << "Minimum number required to add to " << n << " , make it divisible by 7 = "<< minimum_req;
}