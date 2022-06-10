#include "bits/stdc++.h"
using namespace std;

int rainWater(vector<int> a)
{
  stack<int> s;
  int ans = 0;
  for(int i =0;i<a.size();i++){
    while(!s.empty() and a[s.top()] < a[i]){
      int cur = s.top();
      s.pop();
      if(s.empty()){break;}
      int dif = i - s.top() - 1;
      ans += (min(a[s.top()],a[i]) - a[cur]) * dif;
    }
    s.push(i);
  }
  return ans;
}

int main()
{
  vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  cout << rainWater(a);
  return 0;
}