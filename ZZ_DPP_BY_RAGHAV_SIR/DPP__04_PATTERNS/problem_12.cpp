// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q12. Take a positive integer n as input. Write a program to print a Repeated Number
Inverted Right Triangle. Each row should display the same number, corresponding to its
current descending row count.
Sample — Input: n = 4 ⇒ Output:
4 4 4 4
3 3 3
2 2
1
*/


#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a = n;
  for (int i = 1; i <= n;i++){
    for (int j = 1; j <= n - i + 1;j++){
      cout << a;
    }
    a--;
    cout << endl;
  }
}