#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int sum = 0;
  int original_no = n;
  while (n!=0){
    int ld = n % 10;
    sum += ld;
    n /= 10;
  }
  cout << "Sum of digits of " << original_no << " = " << sum;
}