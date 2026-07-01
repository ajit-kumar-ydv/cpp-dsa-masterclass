#include<iostream>
using namespace std;
int main(){
  // divisible by 5 only ------ print Kartikey
  // divisible by 3 only ------ print Sakshi
  // divisible by 5 and 3 both ------ print Anuj
  // not divisible by 5 or 3 ------ print Hitesh

  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n % 5 == 0 and n % 3 == 0){
    cout << "Anuj";
  }
  else if (n % 5 == 0){
    cout << "Kartikey";
  }
  else if (n % 3 == 0){
    cout << "Sakshi";
  }
  else{
    cout << "Hitesh";
  }
}