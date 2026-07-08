//  #include<iostream>
//  using namespace std;
//  int main(){
//  for(int i = 1; i <= 2; i++) {
//  for(int j = 1; j <= 3; j++) {
//  if(j == 2) break;
//  cout << i << "" << j << " ";
//  }
//  }
//  return 0;
//  }

// OUTPUT:

#include <iostream>
using namespace std;
int main(){
  for (int i = 1; i <= 2; i++){
    for (int j = 1; j <= 3; j++){
      if (j == 2)
        break;
      cout << i << " " << j << " ";
    }
  }
  cout << endl
       << "MY ANSWER________________" << "1 1 2 1  ";
  return 0;
}
