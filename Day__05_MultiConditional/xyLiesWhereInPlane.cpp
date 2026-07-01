#include<iostream>
using namespace std;
int main(){
  // Given a point (x,y) write a program to find out if it lies in the 1st Quadrant,
  //2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin
  int x, y;
  cout << "Enter an integer: ";
  cin >> x;
  cout << "Enter an other integer: ";
  cin >> y;

  if (x > 0 and y > 0)
    cout << "1st quadrant.";
  else if(x < 0 and y > 0)
    cout << "2nd quadrant.";
  else if (x <0 and y < 0)
    cout << "3rd quadrant";
  else if (x > 0 and y < 0)
    cout << "4th quadrant";
  else if (x == 0 and y == 0)
    cout << "origin";
  else if (x == 0)
    cout << "Y-axis";
  else
    cout << "X-axis";
}