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
class myLikedList{
private:
  Node *head;
  Node *tail;
  int length;
public:
  myLikedList(){ // default
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
  }

};
int main(){

}