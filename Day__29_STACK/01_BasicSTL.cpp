#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(10);  // tc=o(n)
  st.push(20);
  st.push(30);
  st.pop();      // tc=o(n)
  st.push(40); //top pe hai 

  cout << st.size() << endl; // tc=o(n)
}