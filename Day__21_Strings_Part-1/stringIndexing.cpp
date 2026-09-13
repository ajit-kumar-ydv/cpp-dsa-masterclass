#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "Ajit kumar";
  cout << s[1] <<endl; // j
  cout << s[3] <<endl; // t
  cout << s[4] <<endl; // ' '
  cout << s <<endl; // Ajit kumar

  s[1] = 'm';
  cout << s <<endl; // Amit kumar

  cout << s.size() << endl; // 10
  cout << s.length() << endl; // 10
}