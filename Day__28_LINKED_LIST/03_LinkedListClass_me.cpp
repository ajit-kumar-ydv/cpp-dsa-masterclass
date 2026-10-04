#include<iostream>
using namespace std;
class Node{ // USER DEFINED DATATYPE
public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    //next = NULL;
  }
};

class MyLinkedList{ // USER DEFINE DATA STRUCTURE
private:
  Node *head;
  Node *tail;
  int length;
public:
  MyLinkedList(){
    head = tail = NULL;
    length = 0;
  }
  void display(){
    Node *temp = head;
    while(temp != NULL){
      cout << temp->val << " ";
      temp = temp->next;
      
    }
    cout << endl;
  }
  void insertAtTail(int val){
    Node *n = new Node(val);
    if(length == 0){
      head = tail = NULL;
    }else{
      tail->next = n;
      tail = n;
    }
    length++;
  }
  void insertAtHead(int val){
    Node *n = new Node(val);
    if(length==0){
      head = tail = n;
    }else{
      n->next = head;
      head = n;
    }
    length++;
  }

  void insert(int idx,int val){
    if(idx < 0 || idx > length){
      cout << "INVALID INDEX" << endl;
      return;
    }
    if(idx==0){ // INSERT AT HEAD
      insertAtHead(val);
      return;
    }
    if(idx == length){// INSERT AT TAIL
      insertAtTail(val);
      return;
    }

    // real logic
    Node* n = new Node(val);
    Node *temp = head;
    for(int i = 1; i <= idx - 1;i++){
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
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
    length--;
  }
  void remove(int idx){
    if(idx<0 || idx>=length){
      cout << "Invalid index" << endl;
      return;
    }
    if(idx==0){
      removeAtHead();
      return;
    }
    // logic
    Node *temp = head;
    for (int i = 1; i <= idx - 1;i++){
      temp = temp->next;
    }
    temp = temp->next->next;
    length--;
    if(idx==length-1)
      tail = temp;
  }

  int get(int idx){
    if(idx<0 || idx >= length){
      cout << "Invalid idx" << endl;
      return -1;
    }
    //if(idx==0)
    //  return head->val;
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
  MyLinkedList list;
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