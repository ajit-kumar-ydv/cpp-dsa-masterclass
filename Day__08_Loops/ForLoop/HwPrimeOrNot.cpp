#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  // n = 30 --> 1, 2, 3, 5, 6, 10, 15, 30 => NOT PRIME
  // n = 23 --> 1, 23 => PRIME

  if (n < 0){
    n = (-1) * n;
  }

  if (n == 0 || n == 1){
    cout << "NOT PRIME, NOT COMPOSITE.";
  }

  for (int i = 2; i <= n / 2; i++){
    if (n % i == 0){
      cout << "NOT PRIME" << endl;
      break;
    }
    else{
      cout << "PRIME" << endl;
      break;
    }
  }
}