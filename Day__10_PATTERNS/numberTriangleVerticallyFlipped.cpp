//   1
//  12
// 123
//1234

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n;i++){
    //SPACES
    for (int j = 1; j <= n - i;j++){
      cout << " ";
    }
    //NUMBERS
    for (int j = 1; j <= i;j++){
      cout << j;
    }
    cout << endl;
  }
}