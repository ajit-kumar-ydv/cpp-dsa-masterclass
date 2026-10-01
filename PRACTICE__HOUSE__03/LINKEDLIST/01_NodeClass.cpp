#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next; // next is pointer to node  // integer ka address int* me
              //float ka address float* me  //Node ka address Node* me

  Node(int val){ // Constructor
    this->val = val;
  }
};


int main(){
  Node a(7); // Head
  Node b(0);
  Node c(1);
  Node d(8);
  Node e(2);

  // Connection or attaching of node
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;

  cout << b.val << endl;
  // WITHOUT USING b AAP b ka value likho
  cout << (*(a.next)).val << endl; // dereference operator use kro

  // AB d ko print krke dikhao
  cout << (*(c.next)).val << endl;
  // *(). ko -> se replace kr sakte hai
  cout << (c.next)->val << endl;
}