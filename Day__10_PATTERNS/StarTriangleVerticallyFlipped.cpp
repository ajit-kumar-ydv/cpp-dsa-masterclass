//   *
//  **
// ***
//****
// m1---> i+j>n --*
// loop ke under 2 loops,,, 1 for space,,,,2nd for * .

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n;i++){
    //SPACES
    for (int j = 1; j <= n - i;j++){
      cout << " ";
    }
    //STARS
    for (int j = 1; j <= i;j++){
      cout << "*";
    }
    cout << endl;
  }
}