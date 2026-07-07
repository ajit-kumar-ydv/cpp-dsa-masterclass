#include<iostream>
using namespace std;
int main(){
  // by both --> AJIT
  // by 5 only ---> RAVI
  // by 3 only ---> NEHA
  // by none ----> HAPPY
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if(n % 5 == 0 and n % 3 == 0)
    cout << "AJIT";
  else if (n % 5 == 0)
    cout << "RAVI";
  else if (n % 3 == 0)
    cout << "NEHA";
  else
    cout << "HAPPY";
}