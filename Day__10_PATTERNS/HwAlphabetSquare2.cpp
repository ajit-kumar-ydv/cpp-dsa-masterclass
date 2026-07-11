// a b c d
// a b c d

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n;j++){
      cout << (char)(j + 96) << " ";
    }
    cout << endl;
  }
}