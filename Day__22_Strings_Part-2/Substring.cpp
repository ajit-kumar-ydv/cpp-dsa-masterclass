#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "Bhavya";
  string sub = s.substr(0, 3); // index-0 se 3 length tk
  cout << sub << endl;// Bha

  cout << s.substr(1, 3) << endl; // hav
  cout << s.substr(2) << endl; // 2 se end
}