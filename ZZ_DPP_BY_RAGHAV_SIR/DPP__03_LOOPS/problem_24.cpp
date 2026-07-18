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
  cout << "Enter two positive integers: ";
  cin >> n1 >> n2;
  // swap if n1 is larger than n2
 if( n1 > n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp ;
 }

  for (int i = n1 + 1; i < n2; i++)
  {
    int temp = i;
    bool is_prime = true;
    if (temp <= 1)
      is_prime = false;

    int j = 2;
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
  
  

}