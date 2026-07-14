// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

// Q9. (Crazy Question 1)

#include <iostream>
using namespace std;
int main(){
  int n = 4;
  for (int i = 1; i <= n; i++){
    int x = 1;
    for (int j = 1; j <= n; j++){
      if (j <= n - i){
        cout << " ";
      }
      else{
        cout << x;
        x = !x;
      }
    }
    cout << endl;
  }
}
