#include<iostream>
using namespace std;
int main(){
  // Take 3 positive integers input and print the least of them
  int a, b, c;
  cout << "Enter a positive integer: ";
  cin >> a;
  cout << "Enter a positive integer: ";
  cin >> b;
  cout << "Enter a positive integer: ";
  cin >> c;

  if (a <= b){
    if (a <= c){
      cout << "Least = " << a;
    }
    else{
      cout << "Least = " << c;
    }
  }
  else{
    if (b <= c){
      cout << "Least = " << b;
    }
    else{
      cout << "Least = " << c;
    } 
  }
}