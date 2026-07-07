#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (n<0)
    n *= -1;
  if (n >= 100 and n <= 999)
    cout << "3 Digit number";
  else
    cout << "Not, 3 digit number";
}