#include <iostream>
using namespace std;
int main (){
  //Take an amount in Rupees (double) and convert it to Dollars,
  // Given that 1 Dollar = 100 Rupees
  // Sample --- input: 250 => output : 2.5

  double rupees;
  cout << "Enter the amount of Rupees: ";
  cin >> rupees;
  cout << "Amount you have in Dollars = " << rupees / 100.0;
}