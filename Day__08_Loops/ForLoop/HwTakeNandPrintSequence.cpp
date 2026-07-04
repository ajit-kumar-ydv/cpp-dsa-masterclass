#include<iostream>
using namespace std;
int main(){
  // TAKE 'n' AS INPUT AND PRINT THE FOLLOWING SEQUENCE :---
  // 1
  // n
  // 2
  // n-1
  // 3
  // n-2
  // ... so on

  int n;
  cout << "Enter a positive number: ";
  cin >> n;

  for (int i = 1; i <= n; i++){
    cout << i << endl;
    cout << n - i + 1 << endl;
  }

}