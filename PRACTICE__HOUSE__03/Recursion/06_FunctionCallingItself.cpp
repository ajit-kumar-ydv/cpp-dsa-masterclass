#include<iostream>
using namespace std;
void deeksha(){
  cout << "Deeksha" << endl;
  deeksha();
}
int main(){
  deeksha(); // infinite function calls
             // recursion ka mtlb hi kya rhega fir to
            // saare lines to isme khtm ho hi nhi sakte 
            // hme isse rokne ke liye kbhi na kbhi return krna hi hoga
}