#include<iostream>
using namespace std;
int main(){
  // Take two integer as input.
  // tell - "ONE IS ODD"
  // tell - "BOTH ARE ODD"
  // tell - "NONE IS ODD"

  int a, b;
  cout << "Enter any two integers: ";
  cin >> a >> b;
  if (a % 2 == 1 and b % 2 == 1){
    cout << "BOTH ARE ODD";
  }
  else if (a % 2 == 1 or b % 2 == 1){
    cout << "ONE IS ODD";
  }
  else{
    cout << "NONE IS ODD";
  }
}