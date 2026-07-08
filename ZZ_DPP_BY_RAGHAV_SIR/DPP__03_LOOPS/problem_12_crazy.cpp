// #include <iostream>
// using namespace std;
// int main(){
  // int i = 0;
  // for (;;){
    // if (i == 5){
      // break;
    // }
    // cout << i << " ";
    // i += 2;
  // }
  // return 0;
// }
// A. 0 2 4
// B. 0 2 4 6
// C. Compilation Error
// D. Infinite Loop


#include <iostream>
using namespace std;
int main(){
  int i = 0;
  for (;;){
    if (i == 5){ // condition never met --- i = 0 , 2, 4 , 6, 8....
      break;
    }
    cout << i << " ";
    i += 2;
  }
  cout << endl
       << "MY ANSWER_____WAS_____" << "0 2 4" << endl // ONLY IF CONDITION WILL BE  i == 6;
       << "MY ANSWER_____NOW_____" << "INFINITE LOOP" << endl;
  return 0;
}