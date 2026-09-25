#include<iostream>
using namespace std;
void kartik(){
  cout << "Kartik" << endl;
  param();
}
void param(){
  cout << "Param" << endl;
  aryan();
}
void aryan(){
  cout << "Aryan" << endl;
}
int main(){
  kartik(); // kartik param aryan
  param();  // param aryan
  aryan();  // aryan
}