//*********     ---- 9             // nst = 2*n-1;           nsp = 0;
// *******       ----7             // nst -= 2 ;              nsp += 1
//  *****        ----5
//   ***          ---3
//    *            --1              // n = 5

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n;i++){
    //SPACES
    for (int j = 1; j <= i - 1;j++){
      cout << " ";
    }
   //STARS
    for (int j = 1; j <= 2*(n-i) + 1; j++){
      cout << "*";
    }
    cout << endl;
  
  }



  //  METHOD ----- 2
  // int nst = 2*n - 1;
  // int nsp = 0;
  // for (int i = 1; i <= n;i++){
    //spaces
    // for (int j = 1; j <= nsp;j++){
      // cout << " ";
    // }
    //stars
    // for (int j = 1; j <= nst;j++){
      // cout << "*";
    // }
    // nsp += 1;
    // nst -= 2;
    // cout << endl;
  // }


}