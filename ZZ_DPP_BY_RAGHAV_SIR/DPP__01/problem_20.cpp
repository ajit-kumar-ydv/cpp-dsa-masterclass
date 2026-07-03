#include <iostream>
using namespace std;
int main(){
  // A shopkeeper applies a discount of  d% on the marked price m, and then charges a tax of t% on the discount price.
  // Take m,d, and t (all doubles) as input and print the final amount the customer pays.
  // Discounted Price = m - (d/100 * m)
  // Final Price = Discounted Price * (1 + t/100)
  // Input: m = 1000, d = 10, t = 18  => Output: 1062

  double m, d, t;
  cout << "Enter d,m,t in order: ";
  cin >> d >> m >> t;
  double discountedPrice = m - (m * d / 100.0);
  double finalPrice = discountedPrice + discountedPrice * t / 100.0;

  cout << "Final Price = " << finalPrice;
}