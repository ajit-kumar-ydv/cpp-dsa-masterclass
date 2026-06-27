#include<iostream>
using namespace std;
int main(){
  // If cost price and selling price of an item is input through the keyword,
  // write a program to determine whether the seller has made profit or loss or none,
  // Also determine how much profit he made or loss he incurred.

  int cp, sp;
  cout << "Enter cost price: ";
  cin >> cp;
  cout << "Enter selling price: ";
  cin >> sp;
  int y = sp - cp;
    
  if(y>0){
    cout << "Profit= " << y;
  }else if (y<0){
    cout << "Loss = " << (-1) * y;
  }else{
    cout << "No Profit, No Loss.";
  }
}