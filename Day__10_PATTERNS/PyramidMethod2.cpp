//   *         ---->space = n-1;  star = 1;  space -= 1;  star += 2;
//  ***
// *****
//*******    ----> n=4


#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  int nsp = n - 1;
  int nst = 1;
  for (int i = 1; i <= n;i++){
    // spaces
    for (int j = 1; j <= nsp;j++){
      cout << " ";
    }
    // stars
    for (int j = 1; j <= nst;j++){
      cout << "*";
    }
    nsp -= 1;
    nst += 2;
    cout << endl;
  }
}