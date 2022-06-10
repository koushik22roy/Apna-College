//largest rectangle in histogram
#include "bits/stdc++.h"
using namespace std;
int maxArea(vector<int> a)
{
  stack<int> s;
  int n = a.size(), ans = 0, i = 0;
  a.push_back(0);
  while (i < n)
  {
    while (!s.empty() and a[s.top()] > a[i])
    {
      int t = s.top();
      int h = a[t];
      s.pop();
      if (!s.empty())
      {
        ans = max(ans, h * i);
      }
      else
      {
        int len = i - s.top() - 1;
        ans = max(ans, h * len);
      }
    }
    s.push(i);
    i++;
  }
  return ans;
}

int main()
{
  vector<int> v = {2, 1, 4, 5, 6, 2, 3};
  cout << maxArea(v) << endl;
}