#include<iostream>
using namespace std;

void print1toN(int x,int n){
  if(x>n)
    return;
  cout << x << " ";
  print1toN(x + 1,n);
}
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  print1toN(1,n);
}