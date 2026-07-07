#include<iostream>
using namespace std;
int main(){
  int a, b, c;
  cout << "Enter all 3 sides of a triangle: ";
  cin >> a >> b >> c;
  if( a+b > c and b+c > a and c+a > b)
    cout << "VALID TRIANGLE";
  else
    cout << "INVALID";
}