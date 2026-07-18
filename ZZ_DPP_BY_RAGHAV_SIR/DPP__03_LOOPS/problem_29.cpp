// Q29. Take a positive integer input from the user and print its prime factors.
// Sample — Input: 60 ⇒ Output: 2 2 3 5



#include<iostream>
using namespace std;
int main(){

  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  for (int i = 2; i*i <= n;i++){
    /*
    if(n % i == 0 ){
      int temp = i;
      int j;
      for ( j = 2; j < temp; j++){
        if (temp % j == 0)
          break;
      }
      if(j == temp)
        cout << temp << " ";
    }
        */

    // SOLUTION --- DPP
    while (n % i == 0) {
       cout << i << " ";
        n /= i;
      }
  }
  if( n > 1) cout << n << endl ;

}