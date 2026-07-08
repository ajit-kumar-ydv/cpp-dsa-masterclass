#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number(less than 10): ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    if(i%5==0) break;
    cout << i << " ";
  }
}