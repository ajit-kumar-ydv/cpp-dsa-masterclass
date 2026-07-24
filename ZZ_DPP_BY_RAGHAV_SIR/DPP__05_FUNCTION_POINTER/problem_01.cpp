#include<iostream>
using namespace std ;
int main () {
  int x = 10;
  {
    int x = 20;
    cout << x << " ";
  }
  cout << x ;
}