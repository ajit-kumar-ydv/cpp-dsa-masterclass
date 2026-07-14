// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

#include <iostream>
using namespace std;
int main(){
  int n = 3;
  for (int i = 1; i <= n; i++){
    char ch = 'A';
    for (int j = 1; j <= i; j++){
      cout << ch++;
    }
    cout << endl;
  }
  cout << "My answer______" << endl
       << "B" << endl
       << "BC" << endl
       << "BCD";
}
