// #include <iostream>
// #include <stack>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int prece(char ch)
{
  if (ch == '^')
  {
    return 3;
  }
  else if (ch == '*' || ch == '/')
  {
    return 2;
  }
  else if (ch == '+' || ch == '-')
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

string innfixToPostfix(string st)
{

  reverse(st.begin(), st.end());
  stack<char> s;
  string result;

  for (int i = 0; i < s.length(); i++)
  {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      result += s[i];
    }
    else if (s[i] == '(')
    {
      s.push(s[i]);
    }
    else if (s[i] == ')')
    {
      while (!s.empty() && s.top() != '(')
      {
        result += s.top();
        s.pop();
      }
      if (!s.empty())
      {
        s.pop();
      }
    }
    else
    {
      while (!s.empty() && prece(s.top() >= prece(s[i])))
      {
        result += s[i];
        s.top();
      }
      s.push();
    }
  }
  while (!s.empty())
  {
    result += s.top();
    s.pop();
  }
  reverse(result.begin(), result.end());
  return result;
}

int main()
{
  cout << innfixToPostfix("A+B") << endl;
  return 0;
}