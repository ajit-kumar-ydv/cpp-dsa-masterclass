// For Q1 to Q10:
// Analyze the nested loop architectures and predict the exact output on yourn own;
// do not predict the output pattern by running the code.
// If a question contains multiple choice options, select the correct one.

#include <iostream>
using namespace std;
int main(){
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (i == 0 || i == 3 || j == 0 || j == 3)
        cout << "#";
      else
        cout << " ";
    }
    cout << endl;
  }
  cout << "MY ANSWER__________" << "C-A HOLLOW SQUARE WITH # BORDER.";
}


// 
// What configuration does this coordinate filtering display?
// A. A filled square consisting entirely of hash symbols.
// B. A cross pattern matching the shape of a large central addition plus symbol.
// C. A hollow perimeter border shell framework enclosing a blank inner space.
// D. Two crossing diagonal line structures meeting perfectly in the middle coordinates.