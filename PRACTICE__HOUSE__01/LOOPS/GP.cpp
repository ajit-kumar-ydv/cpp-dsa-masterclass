#include<iostream>
using namespace std;
int main(){
  //1 2 4 8 16 32 64 .....
  int n;
  cout << "Enter numer of terms(less than 20): ";
  cin >> n;
  int a = 1, r = 2;
  for (int i = 1; i <= n;i++){
    cout << a << " ";
    a *= 2;
  }
}