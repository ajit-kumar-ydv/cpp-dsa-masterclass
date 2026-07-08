//  #include<iostream>
//  using namespace std;
//  int main(){
//  for(int i = 0; i < 5; i++) {
//  if(i == 2) break;
//  cout << i << " ";
//  }
//  return 0;
//  }
// A. 0 1 2 3 4      B. 0 1     C. 0 1 3 4      D. 1 2

#include <iostream>
using namespace std;
int main(){
  for (int i = 0; i < 5; i++){
    if (i == 2)
      break;
    cout << i << " ";
  }

  cout << endl
       << "MY ANSWER___________" << "0 1 ";
  return 0;
}
