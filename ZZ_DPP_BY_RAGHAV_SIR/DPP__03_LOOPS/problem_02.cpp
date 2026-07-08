//  #include<iostream>
//  using namespace std;
//  int main(){
//  int x = 3;
//  while(x--) {
//  cout << x << " ";
//  }
//  return 0;
//  }
// A. 3 2 1    B. 2 1 0      C. 3 2 1 0      D. 2 1 0 -1

//-----------------------------------------------------------------------------------------------------------------
// Predict the exac toutput of each program block. If there is a compilation error,
// infinite loop,or undefined behavior, state the reason clearly

#include <iostream>
using namespace std;
int main(){
  int x = 3;
  while (x--){ // used--- 3,2,1,0
    cout << x << " "; // output--- 2,1,0
  }

  cout << endl
       << "MY ANSWER____________" << " 2 1 0";
  return 0;
}