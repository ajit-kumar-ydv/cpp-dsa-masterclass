#include<iostream>
using namespace std;
int main(){
  int t = 4;
  while(--t){// 3 ----> 2 ----> 1----> 0 (exit, before run)
    cout << "Hello World" << endl;
  }
}