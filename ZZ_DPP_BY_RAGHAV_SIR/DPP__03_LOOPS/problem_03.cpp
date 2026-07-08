//  #include<iostream>
//  using namespace std;
//  int main(){
//  int count = 0;
//  do {
//  cout << "Loop ";
//  count++;
//  } while (count < 0);
//  return 0;
//  }
//A. InfiniteLoop      B.CompilationError         C. Loop          D.NoOutput

// Predict the exac toutput of each program block. If there is a compilation error,
// infinite loop,or undefined behavior, state the reason clearly


#include <iostream>
using namespace std;
int main(){
  int count = 0;
  do{
    cout << "Loop ";
    count++;
  }while (count < 0);

  cout << endl
       << "MY ANSWER___________" << "Loop";

  return 0;
}
