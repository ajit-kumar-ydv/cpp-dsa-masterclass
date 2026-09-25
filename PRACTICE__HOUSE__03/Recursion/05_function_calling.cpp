#include<iostream>
using namespace std;
void aryan(){
  cout << "Aryan" << endl;
}
void param(){
  aryan();
  cout << "Param" << endl;
  aryan();
}
void kartik(){
  aryan();
  cout << "Kartik" << endl;
  param();
}
int main(){
  kartik(); // aryan kartik aryan param aryan
  param();  // aryan param aryan
  aryan();  // aryan
}