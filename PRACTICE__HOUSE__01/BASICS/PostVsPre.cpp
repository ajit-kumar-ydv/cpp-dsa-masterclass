#include<iostream>
using namespace std;
int main(){
  int x = 10;
  cout << ++x << endl; // 11
  cout << x << endl; // 11

  int y = 20;
  cout << y++ << endl; // 20
  cout << y << endl; // 21
}