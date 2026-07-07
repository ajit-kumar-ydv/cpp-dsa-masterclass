#include<iostream>
using namespace std;
int main(){
  int x = 8;
  int y = x++ + ++x; 
  cout << y; // y = 8 + 10 = 18
}