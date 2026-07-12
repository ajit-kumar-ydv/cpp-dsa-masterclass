//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number: ";
  cin >> n;

  // UPPER HALF
  int nsp = n - 1;
  int nst = 1;
  for (int i = 1; i <= n; i++)
  {
    // spaces
    for (int j = 1; j <= nsp; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= nst; j++)
    {
      cout << "*";
    }
    nsp -= 1;
    nst += 2;
    cout << endl;
  }

  // LOWER HALF
  nst = 2 * n - 3;
  nsp = 1;
  for (int i = 1; i <= n - 1; i++){
    for (int j = 1; j <= nsp; j++){
      cout << " ";
    }
    for (int j = 1; j <= nst; j++){
      cout << "*";
    }
    nsp += 1;
    nst -= 2;
    cout << endl;
  }
}