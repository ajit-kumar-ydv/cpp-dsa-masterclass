// Q24. Write a program that takes two positive integers as input and prints all the prime
// numbers that lie strictly between them.
//
// Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19
// Sample 2 — Input: 20 30 ⇒ Output: 23 29

#include <iostream>
using namespace std;
int main()
{
  int n1, n2;
  cout << "Enter two positive integers (n1 < n2): ";
  cin >> n1 >> n2;
  for (int i = n1 + 1; i < n2; i++)
  {
    int temp = i;
    if (temp <= 1)
      continue;
    int j = 2;
    bool is_prime = true;
    while (j*j <= temp)
    {
      if (temp % j == 0){
        is_prime = false;
        break;
      }
      j++;
    }
    if (is_prime)
      cout << temp << " ";
  }

//  int n1, n2;
//  cout << "Enter two positive integers (n1 < n2): ";
//  cin >> n1 >> n2;
//  for (int i = n1 + 1; i < n2; i++)
//  {
//    int temp = i;
//    int j = 2;
//
//    while (j < temp)
//    {
//      if (temp % j == 0)
//        break;
//      j++;
//    }
//    if (j == temp)
//      cout << temp << " ";
//  }
}