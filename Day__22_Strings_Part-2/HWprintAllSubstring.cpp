#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "abcd";
  // a, ab, abc, abcd
  // b, bc, bcd
  // c, cd
  // d
  int n = s.length();
  for (int i = 0; i < n;i++){
    for (int j = 1; j <= n - i;j++){
      cout << s.substr(i, j) << " ";
    }
    cout << endl;
  }
}