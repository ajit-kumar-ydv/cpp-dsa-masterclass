// Q20. Write a program to check if a given number is a Palindrome. A palindrome number
// reads the same forwards and backwards.
// Sample1—Input: 121⇒Output: Palindrome
// Sample2—Input: 145⇒Output: Not aPalindrome

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original_no = n, rev = 0;
  while (n != 0){
    int ld = n % 10;
    rev *= 10;
    rev += ld;
    n /= 10;
  }
  if ( original_no == rev)
    cout << "Palindrome";
  else
    cout << "Not a Palindrome";
}