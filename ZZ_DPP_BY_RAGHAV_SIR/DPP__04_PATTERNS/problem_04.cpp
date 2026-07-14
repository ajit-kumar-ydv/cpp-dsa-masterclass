// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 3; i++){
    for (int j = 1; j <= i; j++){
      if ((i + j) % 2 == 0)
        cout << "1";
      else
        cout << "0";
    }
    cout << endl;
  }
  cout << "MY ANSWER__________" << endl
       << "1" << endl
       << "01" << endl
       << "101";
}
