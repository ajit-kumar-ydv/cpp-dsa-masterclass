// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.

/*
Q20. Write a program to print an Expanding Number Diamond pattern for a given integer n.
Sample — Input: n = 4 ⇒ Output:

      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
  3 4 5 4 3
    2 3 2
      1

*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= 2 * n - 1;i++){
    int a = i;
    if(i>n)
      a = 2 * n - i;
    //SPACES
    for (int j = 1; j <= n - a;j++){
      cout << " ";
    }
    //NUMBERS
    int print = a;
    for (int j = 1; j <= 2 * a - 1;j++){
      int b = j;
      if(j>i)
        b = 2 * a - j;
      cout << print + b - 1;
    }
    cout << endl;
  }
}