// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q19. Write a program to print the classic Butterfly Pattern. This layout consists of two
mirrored growing right triangles on the top half, and two mirrored shrinking right triangles on
the bottom half, separated by precise hollow space.
Sample — Input: n = 4 (Half rows) ⇒ Output:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= 2 * n;i++){
    for (int j = 1; j <= 2 * n;j++){
      int a = i, b = j;
      if(a>n)
        a = 2 * n - i+1;
      if(b>n)
        b = 2 * n - j+1;
      if(a>=b)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}