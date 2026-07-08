#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original_no = n;
  int rev = 0;
  while (n != 0){
    int ld = n % 10;
    rev *= 10;
    rev += ld;
    n /= 10;
  }
  cout << "Reverse of " << original_no << " = " << rev;
}