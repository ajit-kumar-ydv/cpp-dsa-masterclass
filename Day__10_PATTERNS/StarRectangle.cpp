#include<iostream>
using namespace std;
int main(){
  // STAR RECTANGLE
  int m, n;
  cout << "Enter rows and columns: ";
  cin >> m >> n;

  for (int i = 1; i <= m;i++){
    //cout << "* * * * * " << endl;
    for (int j = 1; j <= n; j++){
      cout << "* ";
    }
    cout << endl;
  }
}