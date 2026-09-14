#include<iostream>
using namespace std;
void printNto1(int n){
  if(n==0)     // BASE CASE
    return;
  cout << n << " "; // WORK
  printNto1(n - 1); // CALL
}
int main(){
  int n;
  cin >> n;
  printNto1(n);
}