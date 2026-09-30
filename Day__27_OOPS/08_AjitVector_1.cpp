#include<iostream>
using namespace std;
class AjitVector{
private:
  int length;
  int cap;
  int* arr;
public:
  AjitVector(int capacity,int default_value){
    length = cap = capacity;
    arr = new int[capacity];  // capacity ke size ka array bn gya hai
    for (int i = 0; i < length;i++){
      arr[i] = default_value; // array ko default elements diya gya hai
    }
  }

  // size do
  int size(){
    return length;
  }

  // capacity do
  int capacity(){
    return cap;
  }

  //pop_back krne do
  void pop_back(){
    if(length==0){
      cout << "Array exist nhi kr rha hai" << endl;
      return;
    }
    length--;
  }

  //push_back krne do
  void push_back(int value){
    if(length == cap){
      cap *= 2;
      int* temp = new int[cap];
      for (int i = 0; i < length;i++){
        temp[i] = arr[i];
      }
      delete[] arr;
      arr = temp;
    }
    arr[length++] = value;
  }

  //value get kro kisi index pe
  int get(int idx){
    if(idx<0 || idx>=length){
      cout << "Index out of bound" << endl;
      return -1;
    }
    return arr[idx];
  }

  // change value at any index
  void set(int idx, int newValue){
    if(idx <0 ||idx>= length){
      cout << "Index out of bound" << endl;
      return;
    }
    arr[idx] = newValue;
  }

  // print krne do bhai
  void print(){
    for (int i = 0; i < length;i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }


};

int main(){
  AjitVector v(5, -1); // vector<int> v(5,-1);

  v.print();
  cout<<v.size()<<" "<<v.capacity()<<endl;
  cout << v.get(3) << endl;
  v.set(3, 40);
  cout << v.get(3) << endl;
  v.pop_back();
  v.print();
  v.push_back(69);
  v.print();
  v.push_back(44);
  cout << v.size() << " " << v.capacity() << endl;


  //  int* arr = new int[5];


}