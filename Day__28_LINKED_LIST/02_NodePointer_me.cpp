#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next; 
  Node(int val){
    this->val = val;
    next = NULL;
  }

};
void print(Node* temp){
  while(temp != NULL){
    cout << temp->val << " ";
    temp = temp->next;
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
  // Node pointer 
  Node* a = new Node(1); // HEAD
  Node* b = new Node(2);
  Node* c = new Node(3);
  Node* d = new Node(4);

  //connection
  a->next = b; 
  b->next = c;
  c->next = d;
  d->next = NULL; // by default bhi sbka NULL hi tha -- to yana nhi bhi dete to koi issue nhi hai

  //PRINT
  print(a);
  printRec(b);
  cout << endl;

  cout << a->val << endl; // 1
  cout << a->next->val << endl;// 2
  cout << a->next->next->val << endl;// 3
  cout << a->next->next->next->val << endl;// 4
}