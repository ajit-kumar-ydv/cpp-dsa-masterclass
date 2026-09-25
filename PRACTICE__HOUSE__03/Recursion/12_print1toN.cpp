#include<iostream>
using namespace std;
void print1toN(int n){
  if(n==0)              // base case
    return;
  print1toN(n - 1);    // call
  cout << n << " ";    // work
}
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  print1toN(n); // tail to head recursion
                // call ke badh kaam
}