#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  // s= "raghav garg"
  // r --> 2
  // a --> 3
  // g --> 3
  // h --> 1
  // v --> 1

  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  // raghav garg

  int n = s.length();
  vector<int> freq(26, 0);
  for (int i = 0; i < n;i++){
    int charIndex = s[i] - 97;
    freq[charIndex] += 1;
  }

  int mxfreq = 0;
  for (int i = 0; i < 26;i++){
    mxfreq = max(freq[i], mxfreq);
  }

  for (int i = 0; i < 26;i++)
  {
    if(freq[i] == mxfreq) {
      cout << char(i + 97);
      return 0;
    }
  }
}