#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next; // next pointer hai jo next node ka address store kr rha ha ----> iska type "pointer to Node" hai;
  Node(int val){
    this->val = val;
  }
};

int main(){
  //Create node
  Node a(7);
  Node b(8);
  Node c(9);
  Node d(10);
  Node x(1);
  Node y(2);
  Node z(3);

  //Connecting nodes with next pointer
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &x;
  x.next = &y;
  y.next = &z;
  z.next = NULL; // NULL ---> Iska mtlb ki iss address pr koi valid object nhi exist krta hai


  // Access value
  cout << a.next->val <<  endl; // b.val
  cout << b.val << " " << endl;
}