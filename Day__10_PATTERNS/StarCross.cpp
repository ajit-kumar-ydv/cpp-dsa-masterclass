// i==j or i+j = n+1;
// *     *
//    *
// *     *
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number(odd): ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n;j++){
      if(i==j or i+j == n+1 ){
        cout << "*";
      }
      else
        cout << " ";
    }
    cout << endl;
  }
}