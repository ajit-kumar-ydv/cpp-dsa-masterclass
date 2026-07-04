#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = n; i >= 1;i--){
    cout << i << " ";
  }
  cout << endl << "METHOD - 2" << endl;
  for (int i = 1; i <= n; i++){
    cout << n - i + 1 << " ";
  }
}