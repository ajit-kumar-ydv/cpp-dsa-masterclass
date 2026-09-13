#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string s = "Arjun is the smartest boy";
  int n = s.length();
  int i = 0, j = 0, maxlen=0;
  string ans = "";
  while(j<n){
    if(s[j] != ' ')
      j++;
    else{
      int len = j - i;
      if(len>maxlen){
        maxlen = len;
        ans = s.substr(i, len);
      }
      //JUMP TO NEXT WORD STARTING
      while(i<n && s[i] ==' '){
        i++;
        j++;
      }
    }
  }
  int len = j - i;
  if(len>maxlen){
  maxlen = len;
  ans = s.substr(i, len);
}
  cout << maxlen;
}