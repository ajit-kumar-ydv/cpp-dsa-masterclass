#include<iostream>
using namespace std;
class Node{ // User Defined Data Type
public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
  }
};

int main(){
  // node creation
  Node a(7);  // head
  Node b(0);
  Node c(1);
  Node d(8);
  Node e(2);

  //connecting or  attaching nodes
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = NULL;
  cout<<a.next->val <<endl; // Accessing val of b with a 
  cout << (*(a.next)).val << endl;

}