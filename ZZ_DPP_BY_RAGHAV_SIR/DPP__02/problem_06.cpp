#include<iostream>
using namespace std;
int main(){
  int marks = 45;
  bool pass = (marks >= 40) ? true : false;
  int bonus = pass ? 5 : 0;
  cout << "Pass status: " << pass << ", Bonus: " << bonus << endl;
  cout << "MY ANSWER_______________________"<<"pass status = 1, Bonus = 5" << endl; // 1 -> true
  return 0;
}