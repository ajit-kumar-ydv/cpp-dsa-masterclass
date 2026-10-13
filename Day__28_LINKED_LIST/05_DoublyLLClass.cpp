#include<iostream>                            
using namespace std;                          
class Node{                                   
public:                                       
  int val;                                    
  Node *next;                                 
  Node *prev;                                 
  Node(int val){                              
    this->val = val;                          
    next = prev = NULL;                       
  }                                           
};                                            
                                              
                                              
class MyDoublyLinkedList{                     
private:                                      
  Node *head;                                 
  Node *tail;                                 
  int length;                                 
public:                                       
  MyDoublyLinkedList(){                       
    head = tail = NULL;                       
    length = 0;                               
  }                                           
  void insertAtTail(int val){                 
    Node *n = new Node(val);                  
    if(length==0)                             
      head = tail = n;                        
    else{                                     
      tail->next = n;                         
      n->prev = tail; //extra                 
      tail = n;                               
    }                                         
    length++;                                 
  }                                           
                                              
                                              
                                              
  void insertAtHead(int val){                 
    Node *n = new Node(val);                  
    if(length==0)                             
      head = tail = n;                        
    else{                                     
      n->next = head;                         
      head->prev = n; //extra                 
      head = n;                               
    }                                         
    length++;                                 
  }                                           
                                              
  void removeAtHead(){                        
    if(length==0){                            
      cout << "List is empty!" << endl;       
      return;                                 
    }                                         
    head = head->next;                        
    head->prev = NULL; // extra               
    length--;                                 
  }                                           
                                              
                                              
  void removeAtTail(){                        
    if(length==0){                            
      cout << "List is empty!" << endl;       
      return;                                 
    }                                         
    tail = tail->prev;                        
    tail->next = NULL;       //extra          
    length--;                                 
  }    
  
  void display(){
    Node *temp = head;
    while(temp){
      cout << temp->val << " ";
      temp = temp->next;
    }
    cout << endl;
  }

    void displayRev(){    
      Node *temp = head;         
      while(temp){               
        cout << temp->val << " ";
        temp = temp->prev;       
      }                                                                      
      cout <<endl;                                                      
    }   
    
    
  int  size(){
    return length;
  }
                                              
};     

int main(){
  MyDoublyLinkedList list;
  list.insertAtTail(10);
  list.insertAtTail(20);
  list.insertAtTail(30);
  list.insertAtHead(40);
  list.display();
}