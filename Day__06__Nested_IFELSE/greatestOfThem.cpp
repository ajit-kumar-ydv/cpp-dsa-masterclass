#include<iostream>
using namespace std;
int main(){
  //Take 3 positive integers input and print the greatest of them
  int a, b, c;
  cout << "Enter any integer: ";
  cin >> a;
  cout << "Enter any integer: ";
  cin >> b;
  cout << "Enter any integer: ";
  cin >> c;

  if (a >= b){
    if (a >= c){
      cout << "Greatest = " << a;
    }
    else{
      cout << "Greatest = " << c;
    }
  }
  else{
    if (b >= c){
      cout << "Greatest = " << b;
    }
    else{
      cout << "Greatest = " << c;
    }
  }
}