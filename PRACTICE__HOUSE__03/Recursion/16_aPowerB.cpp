#include<iostream>
using namespace std;
int power(int a,int b){
  if(a==0)
    return -1;
  if(b==0 || b==1 || a==1)
    return a;
  if(b%2==0){
    int ans = power(a, b / 2);
    return ans * ans; 
  }else{
    int ans = power(a, b / 2);
    return a * ans * ans;
  }
  
}
int main(){
  int a, b;
  cout << "Enter base and power respectively: ";
  cin >> a >> b;
  cout << power(a, b);
}