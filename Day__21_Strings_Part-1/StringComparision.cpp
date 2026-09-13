#include<iostream>
#include<string>
using namespace std;
int main(){
  string x = "abcdef";
  string y = "xyz";
  if(x==y)
    cout << "Same" <<endl;
  else
    cout << "Not Same" << endl;

  if(x>y)
    cout << "abc is greater than xyz" <<endl;
  else
    cout << "xyz is greater than abc" <<endl;
}