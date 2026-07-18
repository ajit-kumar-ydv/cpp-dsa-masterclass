#include <iostream>
using namespace std;
void starTriangle(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  starTriangle(a);
  int b;
  cout << "Enter a number: ";
  cin >> b;
  starTriangle(b);
  int c;
  cout << "Enter a number: ";
  cin >> c;
  starTriangle(c);
}