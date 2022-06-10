//remove duplicates
#include <iostream>
using namespace std;

string remove(string str)
{
  if (str.length() == 0)
  {
    return "";
  }
  char ch = str[0];
  string ans = remove(str.substr(1));

  if (ch == ans[0])
  {
    return ans;
  }
  else
  {
    return (ch + ans);
  }
}

int main()
{
  string str = "hello";
  cout << remove(str) << endl;
  return 0;
}