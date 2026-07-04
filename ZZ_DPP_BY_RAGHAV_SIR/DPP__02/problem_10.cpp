#include<iostream>
using namespace std;
int main(){
  int a = 0, b = 0;
  if (a++ && ++b){
    cout << "Condition standard check true" << endl;
  }
  cout << "a = " << a << ", b = " << b << endl;
  cout << "MY ANSWER______________________" << "a=1, b=0 " << endl;
  return 0;
}