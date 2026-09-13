#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "Ajit Bhai";
  int count = 0;
  for (int i = 0; i < s.size();i++){
    char ch = s[i];
    if(ch>=65 and ch<=90)
      ch += 32;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      count++;
  }
  cout << count << endl;
}