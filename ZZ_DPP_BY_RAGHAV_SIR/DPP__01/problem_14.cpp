#include<iostream>
using namespace std;
int main(){
  //A circle of radius r is inside a square os side a 
  // (the circle always sits completely inside the square without touching its edges.)
  //Find the area of the shaded region--- the part inside the square but outside the circle.
  // USE PI = 3.14

  //                  -----------
  //                  |   . .    |
  //                  |  .   .   |
  //                  |   . .    |
  //                   -----------

  // Sample---Input: r = 2, a = 6   => Output : 23.44

  //float a, r;
  double r, a;
  cout << "Enter side of the square: ";
  cin >> a;
  cout << "Enter radius of the circle, inside the square (side > 2*radius): ";
  cin >> r;
  double area_of_shaded_region = (a * a) - (3.1415 * r * r);
  cout << "Shaded Area = " << area_of_shaded_region;
}