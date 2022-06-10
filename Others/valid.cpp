//{} () []  {()}  valid string 
 #include "bits/stdc++.h"
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool checking(string str){
  stack<char> st; char ch;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '{' || str[i] == '(' || str[i] == '[')
    {
      st.push(str[i]);
      continue;
    }
    
    switch (ch)
    { 
      case '}': if(st.empty() || st.top() != '{')
                  return false;
                else
                  st.pop();
                  break;

      case ')': if(st.empty() || st.top() != '(')
                  return false;
                else
                  st.pop();
                  break;
            
      case ']': if(st.empty() || st.top() != '[')
                  return false;
                else
                  st.pop();
                  break;

      default: cout<<"Done!!";
    }

  }
}
  int main(){
  string s = " {}";
  if(checking(s)){
    cout<<"correct";
  }
  else
    cout<<"no correct";
  return 0;
}

