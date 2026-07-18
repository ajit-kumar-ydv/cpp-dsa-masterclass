// Q28. Write a program that accepts an integer input and finds the strictly next prime number
// that appears after it. If the user provides an input greater than 500, immediately print "Invalid
// Input" and terminate.
// Sample 1 — Input: 14 ⇒ Output: 17
// Sample 2 — Input: 499 ⇒ Output: 503
// Sample 3 — Input: 505 ⇒ Output: Invalid Input

#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  if (n > 500){
    cout << " Invalid Input " << endl;
  }
  else{
    int curr = n + 1;
    while (true){
      bool isPrime = true;
      if (curr <= 1)
        isPrime = false;

      for (int i = 2; i <= sqrt(curr); i++){
        if (curr % i == 0){
          isPrime = false;
          break;
        }
      }

      if (isPrime){
        cout << curr << endl;
        break;
      }
      curr++;
    }
  }
}