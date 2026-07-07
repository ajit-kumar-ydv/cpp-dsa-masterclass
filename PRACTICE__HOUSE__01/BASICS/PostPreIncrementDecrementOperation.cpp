#include<iostream>
using namespace std;
int main(){
  int x = 10;
  cout << ++x << endl; // 11
  cout << x << endl; // 11
  
  int y = 25;
  cout << --y << endl; // 24
  cout << y << endl; // 24
  cout << y-- << endl; // 24
  cout << y << endl; // 23
}