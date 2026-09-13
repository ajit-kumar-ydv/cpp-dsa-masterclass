#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "Mariya";
  int n = s.size();
  int i = 0, j = n / 2 - 1;
  while(i<j){
    swap(s[i], s[j]);
    i++;
    j--;
  }
  cout << s << endl;
}