#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter your last number: ";
  cin >> n;
  for (int i = 2; i <= n; i+=2){
    cout << i << " ";
  }

   // 100 iterations
    // for(int i=1;i<=100;i++){
    //     if(i%2 == 0) cout<<i<<" ";
    // }

    // // 50 iterations
    // for(int i=2;i<=100;i+=2){
    //     cout<<i<<" ";
    // }

    // 50 iterations
  cout << endl
       << endl;
  for (int i = 1; i <= 50; i++)
  {
    cout << i * 2 << " ";
  }

}