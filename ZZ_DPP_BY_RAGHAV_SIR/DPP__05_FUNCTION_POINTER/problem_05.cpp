#include<iostream>
using namespace std;
void modifyRef(int &x){
  x = x + 10;
}
int main(){
  int a = 5;
  modifyRef(a);
  cout << a;
}