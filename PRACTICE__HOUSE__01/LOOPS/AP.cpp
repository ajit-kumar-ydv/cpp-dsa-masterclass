#include<iostream>
using namespace std;
int main(){
  // 2 5 8 11 14 17 20 ....
  int n;
  cout << "Enter number of terms: ";
  cin >> n;
  for (int i = 2; i <= 3 * n - 1; i += 3){
    cout << i << " ";
  }
}