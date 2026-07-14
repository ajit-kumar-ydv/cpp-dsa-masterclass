// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

#include <iostream>
using namespace std;
int main(){
  int count = 1;
  for (int i = 1; i <= 3; i++){
    for (int j = 1; j <= 3; j++){
      if (i == j){
        cout << "X";
      }
      else{
        cout << count++;
      }
    }
    cout << endl;
  }
  cout << "MY ANSWER________" << endl
       << "x12" << endl
       << "3x4" << endl
       << "56x";
}
