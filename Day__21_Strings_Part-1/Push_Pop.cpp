#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s = "Ajit";
  s.push_back('k'); // only takes a character
  cout << s << endl;

  sort(s.begin(), s.end());
  cout << s << endl;
  reverse(s.begin(), s.end());
  reverse(s.begin()+1, s.end()-1);
  cout << s << endl;

  // ASCII VALUE KE CONCEPT SE HO RHA HAI,,,,, Na KI ALPHABET
}