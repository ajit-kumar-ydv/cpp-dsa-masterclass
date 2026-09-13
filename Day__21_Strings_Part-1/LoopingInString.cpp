#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "Ajit Kumar";
  int n = s.length();
  for (int i = 0; i < n;i++){
    cout << s[i] << endl;
  }

  for(char ch:s){
    cout << ch << " ";
  }
}