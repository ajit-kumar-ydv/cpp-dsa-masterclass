#include<iostream>
using namespace std;
int main(){
  // Take two integers input from the user. Determine and print whether their multiplication
  // product is positive, negative, or zero without calculating the absolute numeric valuation value if possible.
  // Sample: --- Input: -4,5 => Output: Product is Negative
  int n1, n2;
  cout << "Enter any two integers: ";
  cin >> n1 >> n2;
  if ((n1>0 && n2>0) || (n1<0 && n2<0)){
    cout << "Multiplication is Positive (+ve).";
  }
  else if(n1==0 || n2==0){
    cout << "Multiplication is ZERO.";
  }
  else{
    cout << "Multiplication is negative (-ve).";
  }
}