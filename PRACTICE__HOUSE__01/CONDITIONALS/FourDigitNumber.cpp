#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (n < 0)
    n *= -1;
  if (n >=1000 && n<= 9999)
    cout << "4 Digit Number";
  else
    cout << "Not, 4 Digit Number";
}