//  #include<iostream>
//  using namespace std;
//  int main(){
//  int sum = 0;
//  for(int i = 1; i <= 4; i++) {
//  if(i % 2 == 0) continue;
//  sum += i;
//  }
//  cout << sum;
//   return 0;
//  }
// A. 1 0    B. 6     C. 4      D. 3

#include <iostream>
using namespace std;
int main(){
  int sum = 0;
  for (int i = 1; i <= 4; i++){
    if (i % 2 == 0)
      continue;
    sum += i;
  }
  cout << sum;
  cout << endl
       << "MY ANSWER_____________" << " 4 ";
  return 0;
}