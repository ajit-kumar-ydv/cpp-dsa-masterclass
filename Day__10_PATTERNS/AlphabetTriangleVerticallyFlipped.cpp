//   A
//  BB
// CCC
//DDDD
// LOOP KE UNDER 2 LOOP 

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n;i++){
    // SPACES
    for (int j = 1; j <= n - i;j++){
      cout << " "<<" ";
    }
    // CHARACTERS
    for (int j = 1; j <= i;j++){
      cout << (char)(i + 64)<<" ";
    }
    cout << endl;
  }
}