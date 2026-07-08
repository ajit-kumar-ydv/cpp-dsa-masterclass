// #include <iostream>
// using namespace std;
// int main(){
  // for (int i = 0; i < 5, false; i++){
    // cout << "Hello ";
  // }
  // cout << "Done";
  // return 0;
// }

// A. Hello Hello Hello Hello Hello Done
// B. Done
// C. Compilation Error
// D. Infinite Loop
//-------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;
int main(){
  for (int i = 0; i < 5, false; i++){
    cout << "Hello ";
  }
  cout << "Done";
  cout << endl
       << "MY ANSWER______WAS____" << "Hello*5 Done"
       << "MY ANSWER______now____" << "Done";

  return 0;
}