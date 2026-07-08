// Q14. Write a program that takes two integers as input and prints all the even numbers located
// strictly between them.
// Sample 1 — Input: 3 10 ⇒ Output: 4 6 8
// Sample 2 — Input: 12 21 ⇒ Output: 14 16 18 20



#include<iostream>
using namespace std;
int main(){
  int n1, n2;
  cout << "Enter any two integers (n1 < n2): ";
  cin >> n1 >> n2;
  for (int i = n1+1; i < n2;i++){
    if (i % 2 == 0)
      cout << i << " ";
  }
}