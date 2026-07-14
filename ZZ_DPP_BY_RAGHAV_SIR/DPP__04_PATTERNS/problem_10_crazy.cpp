// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

// Q10. (Crazy Question 2)
#include <iostream>
using namespace std;
int main(){
  int k = 1;
  for (int i = 1; i <= 3; i++){
    for (int j = 1; j <= i; i++){
      cout << k++ << " ";
      if (k > 4)
        break;
    }
    if (k > 4)
      break;
    cout << endl;
  }
}


