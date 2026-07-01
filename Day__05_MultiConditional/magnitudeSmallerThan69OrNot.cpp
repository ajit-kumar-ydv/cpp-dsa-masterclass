#include<iostream>
using namespace std;
int main(){
  //Take integer input and tell if its magnitude is smaller than 69 or not.
  int n;
  cout << "Enter an integer of your choice: ";
  cin >> n;
  int y = (-1) * n;

  if(n >= 0 && n < 69 ){
    cout << "yes, smaller than 69";
  }
  else if(n <= 0 && y < 69){
    cout << "yes, smaller than 69";
  }
  else{
    cout << "no, smaller than 69";
  }

}