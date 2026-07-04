#include<iostream>
using namespace std;
int main(){
  int p = 1, q = 20;
  if(p == 1 || (q = q + 5) > 25){
    cout << "First branch hit" << endl;
  }
  cout << "p = " << p << ", q = " << q << endl;
  cout << "MY ANSWER___________________" << "First branch hit; p=1,q=20" << endl;
  return 0;
}