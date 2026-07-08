//  For Q13 to Q30: Write C++ programs for the following. Ensure proper loop condition checks
//  and variable initializations.

//  Note: As some questions contain a loop inside a loop, do not use too large of a number while
//  checking your code on your laptop, otherwise it will take a lot of time to execute.



// Q13. Take a positive integer N as input and compute the sum of all natural numbers from 1
// up to N using a loop.
// Sample 1 — Input: 5 ⇒ Output: 15
// Sample 2 — Input: 10 ⇒ Output: 55


#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a positive number: ";
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++){
    sum += i;
  }
  cout << "Sum of " << n << " natural numbers = " << sum;
}