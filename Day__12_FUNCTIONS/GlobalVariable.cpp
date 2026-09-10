#include<iostream>
using namespace std;
int x = 7; // Global Variable
void fun(){
    x = 23;
}
int main(){
    cout<<x<<endl; // 7
    fun();
    cout<<x<<endl; // 23
    x = 90;
    cout << x; // 90
}