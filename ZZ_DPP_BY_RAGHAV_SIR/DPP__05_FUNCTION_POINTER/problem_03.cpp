#include<iostream>
using namespace std ;
void printDetails (int a , int b = 10 , int c = 20) {
  cout << a << "-" << b << "-" << c << endl ;
}
int main () {
  printDetails (5) ;
  printDetails (5 , 15) ;
}