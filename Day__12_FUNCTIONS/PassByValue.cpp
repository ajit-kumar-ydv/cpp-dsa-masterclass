#include<iostream>
using namespace std;
void change(int x){
  x = 20;
}
int main(){
  int x = 10;
  change(x);  // passing value 10 not the variable.
  cout << x << endl; // 10
}