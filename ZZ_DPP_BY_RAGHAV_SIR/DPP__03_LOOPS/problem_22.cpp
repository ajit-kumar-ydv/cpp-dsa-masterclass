// Q22.Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit 7, or both,
// anywhere within their numerical representation.
// Sample—Output includes: 2,7, 12, 17,20, 21, 22,..

#include<iostream>
using namespace std;
int main(){
  for (int i = 1; i <= 500; i++){
    int temp = i;
    while (temp != 0) {
      int ld = temp % 10;

      if (ld == 2 or ld == 7){
        cout << i << " ";
        break;
      }

      temp /= 10;
    }
  }
}