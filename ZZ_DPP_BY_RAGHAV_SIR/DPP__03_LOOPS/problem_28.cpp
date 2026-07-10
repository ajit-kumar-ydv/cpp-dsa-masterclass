// Q28. Write a program that accepts an integer input and finds the strictly next prime number
// that appears after it. If the user provides an input greater than 500, immediately print "Invalid
// Input" and terminate.
// Sample 1 — Input: 14 ⇒ Output: 17
// Sample 2 — Input: 499 ⇒ Output: 503
// Sample 3 — Input: 505 ⇒ Output: Invalid Input

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  bool search_prime = true;
  int temp = n;
  int i;
  while (search_prime and n <= 500)
  {
    for (i = 2; i*i <= temp; i++)
    {
      if (temp % i == 0)
      {
        temp++;
        break;
      }
    }
    temp++;
  }
  if (search_prime == false)
    cout << temp;
}