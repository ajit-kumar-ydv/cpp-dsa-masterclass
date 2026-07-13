#include<iostream>
using namespace std;
void minOfTwo(int a, int b){ // Parameters
  if(a<b)
    cout << a << " is smaller" << endl;
  else
    cout << b << " is smaller" << endl;
}

int main(){
  minOfTwo(71, 34); // arguments
}