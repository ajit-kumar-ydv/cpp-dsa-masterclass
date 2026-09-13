#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cout << "Enter A Number: ";
  cin >> n;

  string s = "";
  while(n!=0){
    int ld = n % 10;
    char ch = ld + 48;
    s.push_back(ch);
    n /=10;
  }
  // reverse
  int i = 0, j = s.length() - 1;
  while(i<j){
    char temp=s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
  }

  cout << s;
}