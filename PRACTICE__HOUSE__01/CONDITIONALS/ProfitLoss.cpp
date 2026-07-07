#include<iostream>
using namespace std;
int main(){
  float cp, sp;
  cout << "Enter cp and sp : ";
  cin >> cp >> sp;
  if (sp>cp)
    cout << "Profit =" << sp - cp;
  else if(cp > sp)
    cout << "Loss =" << cp - sp;
  else
    cout << "NO LOSS, NO PROFIT";
}