
#include "bits/stdc++.h"
using namespace std;

int main(){
  string str;
  cin>>str;
  vector<int> dic(256,-1);
  int maxlen = 0,start = -1;
  for (int i = 0; i < str.size(); i++)
  {
    if (dic[str[i]] > start)
    {
      start = dic[str[i]];
    }dic[str[i]] = i;
    maxlen = max(maxlen,i-start); 
    
  }
  cout<<maxlen;
}