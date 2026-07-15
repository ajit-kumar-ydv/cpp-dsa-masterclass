// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.

/*
Q16. Create a program that takes an odd integer n and prints a Square with Diagonals. The
grid should display a solid outer boundary along with intersecting major and minor diagonals.
Sample — Input: n = 8 ⇒ Output:

********
**    **
* *  * *
*  **  *
*  **  *
* *  * *
**    **
********
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <=  n;i++){
    for (int j = 1; j <=  n;j++){
      if(i==1 or i==2*n or i==j or (i+j)==(n+1) or j==1 or j==n)
        cout << "*";
        else
          cout << " ";
    }
    cout << endl;
  }
}