// Q16. Given a positive integer N, write a program to find and print all of its divisors.
// Sample 1 — Input: 12 ⇒ Output: 1 2 3 4 6 12
// Sample 2 — Input: 7 ⇒ Output: 1 7
// Sample 3 — Input: 15 ⇒ Output: 1 3 5 15

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a positive number: ";
  cin >> n;
  for (int i = 1; i * i <= n; i++){
    if(n % i == 0){
      cout << i << " ";
      if(i != n/i)
        cout << n/i << " ";
    }
  }

}