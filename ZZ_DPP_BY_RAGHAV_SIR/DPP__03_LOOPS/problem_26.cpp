// Q26. Take an integer as input and mathematically subtract 293 from it. Compute and print
// the reversed value of this new resulting integer. Ensure your logic correctly handles negative
// results.
// Sample 1 — Input: 183 ⇒ Math: 183−293 = −110 ⇒ Output:-11
// Sample 2 — Input: 400 ⇒ Math: 400−293 = 107 ⇒ Output: 701
// Sample 3 — Input: 293 ⇒ Math: 293−293 = 0 ⇒ Output: 0

/*
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  int new_number = n - 293;
  bool is_negative = false;
  if(new_number < 0){
    new_number *= -1;
    is_negative = true;
  }
  int rev = 0;
  while (new_number >0){
    int ld = new_number % 10;
    rev *= 10;
    rev += ld;
    new_number /= 10;
  }
  if (is_negative)
    cout << rev * (-1);
  else
    cout << rev;
}

*/

// cmath ---> can handle negative as well ------------ ok ok baba

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  int new_number = n - 293;
  int rev = 0;
  while (new_number != 0)
  {
    int ld = new_number % 10;
    rev *= 10;
    rev += ld;
    new_number /= 10;
  }
  cout << rev;
}