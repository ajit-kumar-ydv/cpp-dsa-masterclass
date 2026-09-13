#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s = "AjiT kuMAR";
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    if (ch >= 65 && ch <= 90)
      s[i] = ch + 32;
    else if (ch >= 97 && ch <= 122)
      s[i] = ch - 32;
    else
    {
      s[i] = ch;
    }
  }
  cout << s << endl;
}