// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q14. Write a program that prints an Inscribed Hollow Diamond pattern. The pattern
consists of a solid rectangle of stars with a hollow diamond shape in the center.
Sample — Input: n = 5 ⇒ Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int nst =  n, nsp = 0;
  for (int i = 1; i <= 2 * n;i++){
    for (int j = 1; j <= nst;j++){
      cout << "*";
    }
    for (int j = 1; j <= 2*nsp;j++){
      cout << " ";
    }
    for (int j = 1; j <= nst;j++){
      cout << "*";
    }
    if(i<n){
      nst--;
      nsp++;
    }
    if(i>n){
      nst++;
      nsp--;
    }
    cout << endl;
  }
}