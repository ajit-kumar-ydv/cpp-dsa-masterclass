#include<iostream>
using namespace std;
int main(){
  //Take length and breadth of rectangle as input and write a program to find whether 
  // the area of the rectangle is greater than its perimeter

  double l, b;
  cout << "Enter length of the rectangle: ";
  cin >> l;
  cout << "Enter breadth of the rectangle: ";
  cin >> b;
  double area = l * b;
  double perimeter = 2 * (l + b);

  if (area > perimeter) {
    cout << "Area Is greater than the perimeter."<< area <<" "<< perimeter;
  }
  else if ( area < perimeter ){
    cout << "Perimeter is greater than the area" << area <<" "<< perimeter;
  }
  else{
    cout << "Area and Perimeter are equal" << area <<" "<< perimeter;
  }
}