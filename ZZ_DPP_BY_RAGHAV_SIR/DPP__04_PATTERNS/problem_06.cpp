// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

#include <iostream>
using namespace std;
int main(){
  for (int i = 1; i <= 3; i++){
    int val = i;
    for (int j = 1; j <= 3; j++){
      cout << val << " ";
      val += 2;
    }
    cout << endl;
  }
  cout << "MY ANSWER________" << endl
       << "1 3 5" << endl
       << "2 4 6" << endl
       << "3 5 7";
}
