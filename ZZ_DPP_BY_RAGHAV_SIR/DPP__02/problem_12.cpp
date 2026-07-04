#include<iostream>
using namespace std;
int main(){
  // Take a positive integer input from the user and check if it is divisible by both 3 and 5.
  // Do not use the logical AND (&&) operator inside your conditional test statement.
  // hint:
  // think about how mathematical properties like the LCM
  //can reduce multi-step rules.
  // Sample___ Input: 30 => Output: Divisible by both 3 and 5

  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  if (n % 15 == 0){
    cout << "Divisible by both 3 and 5";
  }
  else{
    cout << "NOT, divisible by both 3 and 5.";
  }
}