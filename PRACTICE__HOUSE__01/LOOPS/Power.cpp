#include<iostream>
using namespace std;
int main(){
  int b, p;
  cout << "Enter the base: ";
  cin >> b;
  cout << "Enter the power: ";
  cin >> p;
  int ans=1;
  for (int i = 1; i <= p; i++){
    ans *= b;
  }
  cout << ans;
}