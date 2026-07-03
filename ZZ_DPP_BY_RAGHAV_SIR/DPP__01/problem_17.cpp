#include<iostream>
using namespace std;
int main(){
  // Take two integers a and b (b!=0) as input.
  // Print the result of ceiling integer division of a by b
  //Hint - Formula for positive integer : (a+b-1)/4
  //Sample -- input: 7,2  => output : 4

  int a, b;
  cout << "Enter a number : ";
  cin >> a;
  cout<< "Enter another number other than 0: ";
  cin >> b;
  int ceiling_division = (a + b - 1) / b;
  cout << "Result of ceiling division = " << ceiling_division;
}