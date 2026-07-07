#include<iostream>
using namespace std;
int main(){
  float n;
  cout << "Enter any rational number: ";
  cin >> n;
  int y = (int)n;
  if (n == y)
    cout << "You entered --> INTEGER";
  
  else
    cout<< "NOT INTEGER";
  cout << endl
       << n;
}