
// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q15. Write a program to print a symmetric Cross Alphabet Pattern for a given integer n.
Sample — Input: n = 4 ⇒ Output:
A       A
 B     B
  C   C
   D D
  C   C
 B      B
A        A

*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= 2*n - 1;i++){
    for (int j = 1; j <= 2 * n + 1;j++){
      int a = i, b = j;
      if(i>n)
        a = 2 * n - i;
      if(j>n)
        b = 2 * n - j;
      if(a==b or (a+b)==2*(n+1))
        cout << (char)(a+64);
      else
        cout << " ";
    }
    cout << endl;
  }
}