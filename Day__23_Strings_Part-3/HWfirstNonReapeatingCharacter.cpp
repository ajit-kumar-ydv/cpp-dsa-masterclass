#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  string s;
  cout << "Enter a string in lowercase: ";
  getline(cin, s);
  // "raghavgarg"

  vector<int> freq(26, 0);

  for(char ch:s){
    int chIdx = ch - 97;
    freq[chIdx]++;
  }

  for (int i = 0; i <26 ;i++){
    if(freq[i]==1){
      cout << char(i + 97);
      return 0;
    }
  }
}