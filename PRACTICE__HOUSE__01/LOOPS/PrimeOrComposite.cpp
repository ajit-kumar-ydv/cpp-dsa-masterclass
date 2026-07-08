#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number greater than 1: ";
  cin >> n;
  if (n<=1) {
    cout << "No prime, No composite";
    return 0;
  }
  bool is_prime = true;
  for (int i = 2; i * i <= n;i++){
    if (n%i==0){
      is_prime = false;
    }
  }
  if (is_prime)
    cout << "PRIME";
  else
    cout << "COMPOSITE";
}