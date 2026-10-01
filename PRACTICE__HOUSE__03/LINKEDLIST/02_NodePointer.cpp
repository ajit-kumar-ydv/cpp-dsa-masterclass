#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    next = NULL;
    //this -> next = NULL; ye bhi okay hai ,, but next ko as a parameter nhi liya hu so this ki koi need nhi hai
  }
};

void print(Node* head){// copy paas hota hai default case me ------>main head is safe
  Node *temp = head;              // yaha bhi recursion ki trh bina temp ke ho skta hai-----/// but for better practice /// use kiya hai temp.
  while(temp!=NULL){
    cout << temp->val << " ";
    temp = temp->next;
  }
}

void printRec(Node* head){ // copy paas hota hai default case me -----> yaha bhi main head safe hai
  if(head == NULL)
    return;
  cout << head->val << " ";
  printRec(head->next); // recursion khud agle ko call krdeta hai,,,,, issi liye good practice ke liye ////// temp use nhi kiye
}


int main(){
  // POINTER OBJECT KA SYNTAX: // Datatype* name = new Datatype(arguments value)

  Node* a = new Node(7); //head
  Node* b = new Node(0);
  Node* c = new Node(1);
  Node* d = new Node(8);
  Node* e = new Node(2);
  

  // Connection or Attaching
  a->next = b; // b ke under next node ka address hai issi liye
  b->next = c;
  c->next = d;
  d->next = e;

  // AB a ke help se saare Node ka val  print krte hai
  cout << a->val << endl;// 7
  cout << (a->next)->val << endl;// 0
  cout << a->next->next->val << endl;// 1
  cout << a->next->next->next->val<< endl;// 8

  cout << "PRINT with help of head " << endl;
  print(a);
//  cout <<a<< endl; head same
  cout << "PRINT using recursion" << endl;
  printRec(a);
  //cout << a; head same
}