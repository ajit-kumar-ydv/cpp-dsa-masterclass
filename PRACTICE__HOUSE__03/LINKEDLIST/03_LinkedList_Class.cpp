#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node *next;
  Node(int val){
    this->val = val;
  }
};
class myLinkedList{
private:
  Node *head;
  Node *tail;
  int length;
public:
  myLinkedList(){ // default
    head = tail = NULL;
    length = 0;
  }
  void display(){
    Node *temp = head;
    while(temp!=NULL){
      cout << temp->val << " ";
      temp = temp->next;
    }
  }
  void insertAtHead(int val){
    Node *n = new Node(val);
    if(length==0){
      head = tail = n;
      length++;
      return;
    }
    n->next = head;
    head = n;
    length++;
  }
  void insertAtTail(int val){
    Node *n = new Node(val);
    if(length==0){
      head = tail = n;
      length++;
      return;
    }
    tail->next = n;
    tail = n;
    length++;
  }
  void insertAtIdx(int idx,int val){
    if(idx==0)
      return insertAtHead(val);
    if(idx==length)
      return insertAtTail(val);
    // Main Part
    Node *n = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx;i++){
      temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
    length++;
  }
  void removeAtHead(){
    if(length==0){
      cout << "List is empty" << endl;
      return;
    }
    head = head->next;
    length--;
  }
  void remove(int idx){
    if(idx<0 || idx>=length) {
      cout << "INVALID IDX" << " ";
      return;
    }
    if(idx==0)
      return removeAtHead();

    // Main part
    Node *temp = head;
    for (int i = 1; i < idx;i++){
      temp = temp->next;
    }
    temp = temp->next->next;
    length--;
    if(idx==length-1){
      tail = temp;
    }
  }
  int get(int idx){
    if(idx<0 || idx>=length){
      cout << "INVALID IDX" << endl;
      return -1;
    }
    Node *temp = head;
    for (int i = 1; i <= idx;i++){
      temp = temp->next;
    }
    return temp->val;
  }
  int size(){
    return length;
  }

};
int main(){
    myLinkedList list;
list.insertAtTail(10);
list.insertAtTail(20);
list.insertAtTail(30);
list.display();
list.removeAtHead();
list.display();
list.insertAtHead(40);
list.display();
// list.length = 0; ERROR
// list.head = NULL; ERROR
cout<<list.size()<<endl;
cout << list.get(0);



}