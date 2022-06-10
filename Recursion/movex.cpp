//move all x at the end
#include <iostream>
using namespace std;
string movex(string s)
{
  if (s.length() == 0)
  {
    return "";
  }

  char c = s[0];
  string ans = movex(s.substr(1));
  if (c == 'x')
  {
    return ans + c;
  }
  return c + ans;
}

using namespace std;
int main()
{
  cout << movex("xhxxxihow") << endl;
  return 0;
}