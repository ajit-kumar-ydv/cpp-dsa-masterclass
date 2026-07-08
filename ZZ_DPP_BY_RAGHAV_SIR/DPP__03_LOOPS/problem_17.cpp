// Q17. Write a program to find if a given positive integer is a Perfect Number. A perfect number
// is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
// is a positive divisor of the number, excluding the number itself.)

// Sample 1 — Input: 28 ⇒ Output: Perfect Number
// (Explanation: Since 1 + 2 + 4 +7+14 = 28)
// Sample 2 — Input: 12 ⇒ Output: Not a Perfect Number
// (Explanation: Since 1 + 2 + 3 +4+6 = 16 ̸ = 12)

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a positive number: ";
  cin >> n;
  int sum = 0;
  for (int i = 1; i * i <= n;i++){
    if(n % i == 0){
    //  cout << i << " ";
        sum += i;
        if (i != n / i){
      //   cout << n / i << " ";
      sum += n / i;
        }
    }
  }
  if (sum == 2*n)
    cout << "Perfect Number";
    else
      cout << "Not, perfect number";
}