#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cout << "ENTER a number: ";
  cin >> n;

  string s = to_string(abs(n));
  cout << s.size() << endl; // 8
}