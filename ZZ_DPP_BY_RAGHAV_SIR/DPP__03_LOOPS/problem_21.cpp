// Q21.Take an integer K as input.Two variables a and b can take any integer value from 1 to K.
// Write a program to print all possible ordered combinations of(a,b) on a newline.
// Sample—Input: 2⇒Output:
// 1, 1
// 1, 2
// 2, 1
// 2, 2
#include<iostream>
using namespace std;
int main(){
  int k;
  cin >> k;
  for (int a = 1; a <= k;a++){
    for (int b = 1; b <= k;b++){
      cout << a << ", " << b << endl;
    }
  }
}