#include<iostream>
using namespace std;
int main(){
  // Take 'n' as number of sides of a simple polygon
  // Take 's' as sum of all its interior angles
  // WAP to check provided dimension for valid / invalid polygon;

  int n, s;
  cout << "Enter the number of sides: ";
  cin >> n;
  cout << "Enter the sum of all its interior angles: ";
  cin >> s;
  int s1 = (n - 2) * 180;
  if (s == s1){
    cout << "VALID POLYGON";
  }
  else{
    cout << "INVALID POLYGON";
  }
}