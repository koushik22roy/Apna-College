#include <iostream>
using namespace std;

void subsequence(string s, string ans)
{
  if (s.length() == 0)
  {
    cout << ans << endl;
    return;
  }
  char c = s[0];
  string ros = s.substr(1);
  subsequence(ros, ans);
  subsequence(ros, ans + c);
}

int main()
{
  subsequence("ABC", "");
  cout << endl;
  return 0;
}