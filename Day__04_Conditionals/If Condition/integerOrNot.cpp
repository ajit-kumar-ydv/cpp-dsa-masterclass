#include<iostream>
using namespace std;
int main(){
  // Take real number input and check if it is an integer or not
  float num;
  cout << "Enter a real number: ";
  cin >> num;
  int y = int(num);
  if(y==num){
    cout << "Given number is an Integer.";
  }
  if(y != num){
    cout << "Not an integer.";
  }
}