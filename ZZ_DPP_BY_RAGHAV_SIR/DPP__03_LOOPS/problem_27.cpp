// Q27. Write a program to print all uppercase English alphabets from ’A’ to ’Z’ along with
// their corresponding ASCII values using a loop.
// Sample — Output includes:
// A- 65
// B- 66


#include<iostream>
using namespace std;
int main(){
//  for (int i = 65; i <= 90; i++){
//    cout << (char)i << "- " << i << endl;
//  }

for (char c = 'A'; c <= 'Z'; c++){
  cout << c << "- " << (int)c << endl;
}
return 0;
}