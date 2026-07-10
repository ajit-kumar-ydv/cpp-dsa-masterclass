// Q23.Write a program to iterate through the numbers from  1 to 1000 and print only those
// numbers whose sum of digits is exactly 17.
// Sample—Output includes: 89,98,179, 188,..


#include<iostream>
using namespace std;
int main(){
  for (int i = 1; i <= 1000; i++){
    int temp = i;
    int sum = 0;
    while(temp != 0){
      int ld = temp % 10;
      sum += ld;
      temp /= 10;

      if(sum == 17 and temp == 0){
        cout << i << " ";
      }    
    }
  }
}