// Q15. Write a program to take a number as input and compute the product of all its individual digits.
// Sample 1 — Input: 413 ⇒ Output: 12
// Sample 2 — Input: 520 ⇒ Output: 0

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number(1-2000): ";
  cin >> n;
  int digits_product = 1;
  while (n != 0){
    int ld = n % 10;
    digits_product *= ld;
    n /= 10;
  }
  cout << "Product of digits = " << digits_product;
}