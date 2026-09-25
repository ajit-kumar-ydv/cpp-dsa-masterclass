#include<iostream>
using namespace std;
int n;
void print1toN(int x){
  if(x>n)
    return;
  cout << x << " ";
  print1toN(x + 1);
}
int main(){
  cout << "Enter a number: ";
  cin >> n;
  print1toN(1);
}