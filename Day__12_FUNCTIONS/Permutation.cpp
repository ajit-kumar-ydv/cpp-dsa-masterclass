#include<iostream>
#include<cmath>
using namespace std; 
int fact(int n){
  int fact = 1;
  for (int i = 1; i <= n;i++){
    fact *= i;
  }
  return fact;
}
int npr(int a,int b){
  return fact(a) / fact(a - b);
}
int main(){
  int n, r;
  cout << " Enter n and r: ";
  cin >> n >> r;
  cout << npr(n, r);
}