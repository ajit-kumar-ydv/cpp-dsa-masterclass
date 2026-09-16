#include<iostream>
using namespace std;
void print(int n){
  if(n==0)
    return;
  cout << n << " ";
  print(n - 1);
  cout << n << " ";
  print(n - 1);
  cout << n << " ";
}
int main(){
  print(2); // 2 print(1) 2 print(1) 2
  //           2 1 1 1 2 1 1 1 2
            

  // print(1)--> 1 print(0) 1 print(0) 1
  //             1 1 1
}