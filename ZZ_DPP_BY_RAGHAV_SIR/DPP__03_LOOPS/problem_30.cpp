// Q30. Write a program to compute ab (a raised to the power b) where a is a decimal value and
// b is an integer (which can be positive, negative, or zero) entered by the user. Do not use the
// pow() function from <cmath>.
// Sample 1 — Input: 2.0 3 ⇒ Output: 8
// Sample 2 — Input: 2.5-2 ⇒ Output: 0.16
// Sample 3 — Input: 5.4 0 ⇒ Output: 1
// Sample 4 — Input: 4.0-1 ⇒ Output: 0.25

/*
#include<iostream>
using namespace std;
int main(){
  float a;
  int b;
  cout << "Enter the base: ";
  cin >> a;
  cout << "Enter the power: ";
  cin >> b;
  float ans = 1;
  if( b == 0) {
    cout << ans;
    return 0;
  }
  if(b > 0){
    for (int i = 1; i <= b; i++ ){
      ans *= a;
    }
    cout << ans;
  }
  else{
    for (int i = 1; i <= -b;i++){
      //ans *= 1 / a;
      ans /= a;
    }
    cout << ans;

  }
  return 0;
}

*/

#include<iostream>
using namespace std;
int main(){
  double a;
  int b;
  cout << "Enter base: ";
  cin >> a;
  cout << "Enter power: ";
  cin >> b;

  if (a == 0 and b < 0){
    cout << "Undefined.";
    return 0;
  }
  double ans = 1;
  if (b >0 ){
    for (int i = 1; i <= b;i++){
      ans *= a;
    }
  }
  else{
    for (int i = 1; i <= -b;i++){
      ans /= a;
    }
  }
  cout << ans;
  return 0;
}