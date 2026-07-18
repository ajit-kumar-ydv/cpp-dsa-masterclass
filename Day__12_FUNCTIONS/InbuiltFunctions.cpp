#include<iostream>
#include<cmath>
using namespace std;
int max(int a,int b,int c){
  if(a>=b && a>= c)
    return a;
  else if(b>=a && b>=c)
    return b;
  else
    return c;
}
int main(){
  cout << max(51, 78) << endl;
  cout << min(51, 78) << endl;
  cout << max(51, 78, 12) << endl;

  cout << pow(3, 2) << endl;
  cout << pow(2.6, 2.6) << endl;

  cout << sqrt(8) << endl;
  cout << sqrt(3.14) << endl;

  cout << cbrt(1000) << endl;
  cout << cbrt(8) << endl;

  cout << abs(-5) << endl;
}