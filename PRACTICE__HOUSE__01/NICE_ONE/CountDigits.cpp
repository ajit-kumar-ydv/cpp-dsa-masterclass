#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int count=0;
  if (n==0)
    count++;
  while(n != 0)
  { // while (n/10) lene se 1 iteration kn chalega;  // if you want to use it---> start count = 1;
    n /= 10;
    count++;
  }
  cout << "You entered: " << count << " digit/s number. ";
}