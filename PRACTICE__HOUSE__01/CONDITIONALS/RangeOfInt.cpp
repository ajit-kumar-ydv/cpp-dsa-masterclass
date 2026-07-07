#include<iostream>
using namespace std;
int main(){
  int x = INT_MAX, z = INT_MIN;
  cout << x << endl; // 2147483647
  cout << z << endl; //-2147483648
  int y = 2147483649; // OUT OF RANGE ----> giving garbage value
  cout << y;
}