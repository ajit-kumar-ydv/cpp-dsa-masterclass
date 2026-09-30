#include<iostream>
using namespace std;
class Node{ // User Defined Data Type
public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    next = NULL; // By default sbka next = NULL hai;
  };

};

void print(Node* head){
  while(head!=NULL){
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}

void printRec(Node* head){
  if(head==NULL)
    return;
  cout << head->val<<" "; // work
  printRec(head->next); // call

  // reverse print krna ho to work or call ki position ko exchange krde
}

int main(){
  Node* a = new Node(7); // head ka val=7 hai naam nhi pta but iska address a me store hai.
  Node* b = new Node(0);
  Node* c = new Node(1);
  Node* d = new Node(8);
  Node* e = new Node(2);
  
  // attaching nodes
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;

  print(a);
  printRec(a);
  cout << endl;

  cout << a->val << endl; // 7
  cout << a->next->val << endl;// 0
  cout << a->next->next->val << endl;// 1
  cout << a->next->next->next->val << endl;// 8
  cout << a->next->next->next->next->val << endl;// 2
}