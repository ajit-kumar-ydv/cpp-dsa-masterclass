// For Q11 to Q20:
// Write clean, modular, and compilable C++ programs
// Use proper nested loop structures.
// Assume user inputs an integer n denoting structural constraints unless specified otherwise.


/*
Q17. Write a program to construct an Alphabet Palindrome Pyramid. For a given n, each
row should print letters sequentially increasing to a peak character, and then symmetrically
decreasing back to ’A’. Use precise spacing to center the pyramid.
Sample — Input: n = 4 ⇒ Output:
   A
  ABA
 ABCBA
ABCDCBA
*/

#include<iostream>
using namespace std;
int main(){
   int n;
   cout << "Enter number: ";
   cin >> n;
   for (int i = 1; i <= n;i++){
      for (int j = 1; j <= n - i;j++){
         cout << " ";
      }
      for (int j = 1; j <= 2 * i - 1;j++){
         int b = j;
         if(b>i)
            b = 2 * i - j;
         cout << (char)(b + 64);
      }
      cout << endl;
   }
}