// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q18. Design a program to generate a geometric Hollow Star Diamond. (Assume n defines
the number of rows in the top half including the center).
Sample — Input: n = 3 ⇒ Output:
  *
 * *
*   *
 * *
  *
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= 2 * n - 1;i++){
    for (int j = 1; j <= 2 * n - 1;j++){
      int a = i, b = j;
      if(a>n)
        a = 2 * n - i;
      if(b>n)
        b = 2 * n - j;
      if((a+b)==n+1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}